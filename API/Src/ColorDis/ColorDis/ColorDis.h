// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� COLORDIS_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// COLORDIS_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef COLORDIS_EXPORTS
#define COLORDIS_API __declspec(dllexport)
#else
#define COLORDIS_API __declspec(dllimport)
#endif

/*
// �����Ǵ� ColorDis.dll ������
class COLORDIS_API CColorDis {
public:
	CColorDis(void);
	// TODO: �ڴ�������ķ�����
};

extern COLORDIS_API int nColorDis;

COLORDIS_API int fnColorDis(void);
*/

extern COLORDIS_API bool APIColor_Init(int ComPort);
extern COLORDIS_API void APIColor_Quit(void);
extern COLORDIS_API void APIColor_GetColor(int& Red,int& Green,int& Blue);