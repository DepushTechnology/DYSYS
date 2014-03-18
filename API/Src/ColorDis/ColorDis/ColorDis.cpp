// ColorDis.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "ColorDis.h"
#include "CnComm.h"

/*
// ���ǵ���������һ��ʾ��
COLORDIS_API int nColorDis=0;

// ���ǵ���������һ��ʾ����
COLORDIS_API int fnColorDis(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� ColorDis.h
CColorDis::CColorDis()
{
	return;
}
*/

CnComm* p_Comm = NULL;

extern COLORDIS_API bool APIColor_Init( int ComPort )
{
	if (p_Comm != NULL){
		p_Comm->Close();
		delete p_Comm;
		p_Comm = NULL;
	}
	p_Comm = new CnComm;
	if (p_Comm->Open(ComPort,9600)){
		return true;
	}
	else{
		delete p_Comm;
		p_Comm = NULL;
		return false;
	}
}

extern COLORDIS_API void APIColor_Quit( void )
{
	if (p_Comm != NULL){
		p_Comm->Close();
		delete p_Comm;
		p_Comm = NULL;
	}
}

extern COLORDIS_API void APIColor_GetColor( int& Red,int& Green,int& Blue )
{
	if (p_Comm == NULL){
		return;
	}

	unsigned char t_cmd[3];
	t_cmd[0] = 0x54;
	t_cmd[1] = 0x41;
	t_cmd[2] = 0x0d;
	p_Comm->Write(t_cmd,3);
	unsigned char t_rev[4];
	memset(t_rev,0,sizeof(unsigned char)*4);
	p_Comm->Read(t_rev,4);
	Red = t_rev[0];
	Green = t_rev[1];
	Blue = t_rev[2];
}
