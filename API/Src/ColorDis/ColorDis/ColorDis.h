// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 COLORDIS_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// COLORDIS_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef COLORDIS_EXPORTS
#define COLORDIS_API __declspec(dllexport)
#else
#define COLORDIS_API __declspec(dllimport)
#endif

/*
// 此类是从 ColorDis.dll 导出的
class COLORDIS_API CColorDis {
public:
	CColorDis(void);
	// TODO: 在此添加您的方法。
};

extern COLORDIS_API int nColorDis;

COLORDIS_API int fnColorDis(void);
*/

extern COLORDIS_API bool APIColor_Init(int ComPort);
extern COLORDIS_API void APIColor_Quit(void);
extern COLORDIS_API void APIColor_GetColor(int& Red,int& Green,int& Blue);