#define COLORDIS_API __declspec(dllimport)

#pragma comment(lib, "ColorDis.lib")

extern COLORDIS_API bool APIColor_Init(int ComPort);
extern COLORDIS_API void APIColor_Quit(void);
extern COLORDIS_API void APIColor_GetColor(int& Red,int& Green,int& Blue);