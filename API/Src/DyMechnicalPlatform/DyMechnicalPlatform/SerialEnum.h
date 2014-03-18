#pragma once

#include <string>
#include <stdio.h>
#include <vector>

#include <objbase.h>
#include <initguid.h>
#include <Setupapi.h>

using namespace std;

#pragma comment(lib, "setupapi.lib")

#ifndef IN_
	#define IN_
#endif

#ifndef OUT_
	#define OUT_
#endif

#define FTDIHWID "FTDIBUS\\COMPORT&VID_0403&PID_6001"

DEFINE_GUID(GUID_CLASS_IDEF_COMPORT,0x4D36E978,0xE325,0x11CE,0xBF,0xC1, \
	0x08,0x00,0x2B,0xE1,0x03,0x18);

struct HARDWAREINF{
	wstring fname;
	wstring desc;
	wstring hardwareid;
};

class CSerialEnum
{
public:

	CSerialEnum(void)
	{
	}

	~CSerialEnum(void)
	{
	}

public:

	void EnumSerialPort(OUT_ vector<HARDWAREINF> &vechwInf){
		string strErr = "";
		GUID *guidDev = (GUID*) &GUID_CLASS_IDEF_COMPORT;
		HDEVINFO hDevInfo = INVALID_HANDLE_VALUE;
		SP_DEVICE_INTERFACE_DETAIL_DATA *pDetData = NULL;

		try {
			hDevInfo = SetupDiGetClassDevs( guidDev,
				NULL,
				NULL,
				DIGCF_PRESENT | DIGCF_DEVICEINTERFACE
				);

			if(hDevInfo == INVALID_HANDLE_VALUE) 
			{
				char chErr[256];
				memset(chErr,0,sizeof(char)*256);
				sprintf(chErr,"SetupDiGetClassDevs failed. (err=%lx)",
					GetLastError());
				strErr = chErr;
				throw strErr;
			}

			// Enumerate the serial ports
			BOOL bOk = TRUE;
			SP_DEVICE_INTERFACE_DATA ifcData;
			DWORD dwDetDataSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA) + 256;
			pDetData = (SP_DEVICE_INTERFACE_DETAIL_DATA*) new char[dwDetDataSize];
			// This is required, according to the documentation. Yes,
			// it's weird.
			ifcData.cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
			pDetData->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
			for (DWORD ii=0; bOk; ii++) {
				bOk = SetupDiEnumDeviceInterfaces(hDevInfo,
					NULL, guidDev, ii, &ifcData);
				if (bOk) {
					// Got a device. Get the details.
					SP_DEVINFO_DATA devdata = {sizeof(SP_DEVINFO_DATA)};
					bOk = SetupDiGetDeviceInterfaceDetail(hDevInfo,
						&ifcData, pDetData, dwDetDataSize, NULL, &devdata);
					SetupDiGetDeviceInterfaceDetail(hDevInfo,
							&ifcData, pDetData, dwDetDataSize, NULL, &devdata);
					if (bOk) {
						// Got a path to the device. Try to get some more info.
						TCHAR fname[256];
						TCHAR desc[256];
						TCHAR hardwareid[256];
						memset(fname,0,sizeof(TCHAR)*256);
						memset(desc,0,sizeof(TCHAR)*256);
						memset(hardwareid,0,sizeof(TCHAR)*256);
						BOOL bSuccess = SetupDiGetDeviceRegistryProperty(
							hDevInfo, &devdata, SPDRP_FRIENDLYNAME, NULL,
							(PBYTE)fname, sizeof(fname), NULL);
						bSuccess = bSuccess && SetupDiGetDeviceRegistryProperty(
							hDevInfo, &devdata, SPDRP_DEVICEDESC, NULL,
							(PBYTE)desc, sizeof(desc), NULL);
						bSuccess = bSuccess && SetupDiGetDeviceRegistryProperty(
							hDevInfo, &devdata, SPDRP_HARDWAREID, NULL,
							(PBYTE)hardwareid, sizeof(hardwareid), NULL);
						if (bSuccess) {
							wstring strfname = fname;
							wstring strdesc = desc;
							wstring strhardwareid = hardwareid;
							HARDWAREINF tInf;
							tInf.fname = strfname;
							tInf.desc = strdesc;
							tInf.hardwareid = strhardwareid;
							vechwInf.push_back(tInf);
						}
					}
					else {
						char chErr[256];
						memset(chErr,0,sizeof(char)*256);
						sprintf(chErr,"SetupDiGetDeviceInterfaceDetail failed. (err=%lx)",
							GetLastError());
						strErr = chErr;
						throw strErr;
					}
				}
				else {
					DWORD err = GetLastError();
					if (err != ERROR_NO_MORE_ITEMS) {
						char chErr[256];
						memset(chErr,0,sizeof(char)*256);
						sprintf(chErr,"SetupDiEnumDeviceInterfaces failed. (err=%lx)", err);
						strErr = chErr;
						throw strErr;
					}
				}
			}
		}
		catch (string strCatchErr) {
			strErr = strCatchErr;
		}

		if (pDetData != NULL)
			delete [] (char*)pDetData;
		if (hDevInfo != INVALID_HANDLE_VALUE)
			SetupDiDestroyDeviceInfoList(hDevInfo);

		if (strErr != "")
			throw strErr;
	}
	
	OUT_ vector<int> FTDIVector(IN_ vector<HARDWAREINF> HwInf){
		vector<int> vec_port;
		for (auto it = begin(HwInf);it != end(HwInf); ++it){
			if ( it->hardwareid ==  _T(FTDIHWID)){
				int tInt_beginIndex = it->fname.find(_T("("));
				int tInt_endIndex = it->fname.find(_T(")"));
				TCHAR tTCh_Des[50];
				memset(tTCh_Des,0,sizeof(TCHAR)*50);
				it->fname.copy(tTCh_Des,tInt_endIndex-tInt_beginIndex-1,tInt_beginIndex+1);
				wstring tStr_PortName = tTCh_Des;
				TCHAR tTCh_PortNum[50];
				memset(tTCh_PortNum,0,sizeof(TCHAR)*50);
				tStr_PortName.copy(tTCh_PortNum,tStr_PortName.length()-3,3);
				char* ch_PortNum = TCHAR2char(tTCh_PortNum);
				int tInt_PortNum = atoi(ch_PortNum);
				vec_port.push_back(tInt_PortNum);
			}
		}
		return vec_port;
	}
	
	OUT_ char* TCHAR2char(IN_ TCHAR* tchStr) { 
		int iLen = 2*wcslen(tchStr);
		char* chRtn = new char[iLen+1];
		wcstombs(chRtn,tchStr,iLen+1);
		return chRtn; 
	} 
};

