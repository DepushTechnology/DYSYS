// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 DYMECHNICALPLATFORM_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// DYMECHNICALPLATFORM_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef DYMECHNICALPLATFORM_EXPORTS
#define DYMECHNICALPLATFORM_API __declspec(dllexport)
#else
#define DYMECHNICALPLATFORM_API __declspec(dllimport)
#endif

#include "DyMechicalAPI.h"

extern "C"
{
	//************************************
	// Method:    SysInit
	// FullName:  DyMechicalAPI::SysInit
	// Access:    public 
	// Returns:   bool
	// Qualifier: 系统初始化
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API bool API_SysInit(void);
	//************************************
	// Method:    SysQuit
	// FullName:  DyMechicalAPI::SysQuit
	// Access:    public 
	// Returns:   void
	// Qualifier: 系统关闭
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API void API_SysQuit(void);
	//************************************
	// Method:    FeedMotor_Start
	// FullName:  DyMechicalAPI::FeedMotor_Start
	// Access:    public 
	// Returns:   bool
	// Qualifier: 进料电机持续转动
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API bool API_FeedMotor_Start(void);
	//************************************
	// Method:    FeedMotor_Stop
	// FullName:  DyMechicalAPI::FeedMotor_Stop
	// Access:    public 
	// Returns:   bool
	// Qualifier: 进料电机停止转动
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API bool API_FeedMotor_Stop(void);
	//************************************
	// Method:    MotorStart
	// FullName:  DyMechicalAPI::MotorStart
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定电机运动
	// Parameter: int motorNum
	// Parameter: int direction
	// Parameter: int stepNum
	//************************************
	DYMECHNICALPLATFORM_API bool API_MotorStart(int motorNum,int direction,int stepNum);
	//************************************
	// Method:    MotorStop
	// FullName:  DyMechicalAPI::MotorStop
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定电机停止
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API bool API_MotorStop(int motorNum);
	//************************************
	// Method:    MotorReset
	// FullName:  DyMechicalAPI::MotorReset
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定电机复位
	// Parameter: int motorNum
	//************************************
	DYMECHNICALPLATFORM_API bool API_MotorReset(int motorNum);
	//************************************
	// Method:    SetMotorSpeed
	// FullName:  DyMechicalAPI::SetMotorSpeed
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定电机速度
	// Parameter: int motorNum
	//************************************
	DYMECHNICALPLATFORM_API bool API_SetMotorSpeed(int motorNum,int speed);
	//************************************
	// Method:    solenAction
	// FullName:  DyMechicalAPI::solenAction
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定电磁阀动作
	// Parameter: int solenNum
	// Parameter: int statue
	//************************************
	DYMECHNICALPLATFORM_API bool API_solenAction(int solenNum,int statue);
	//************************************
	// Method:    solenAdvace
	// FullName:  DyMechicalAPI::solenAdvace
	// Access:    public 
	// Returns:   bool
	// Qualifier: 指定工作台全部动作
	// Parameter: int platformNum
	// Parameter: int statue
	//************************************
	DYMECHNICALPLATFORM_API bool API_solenAdvace(int platformNum,int statue);
	//************************************
	// Method:    getSolenStatue
	// FullName:  DyMechicalAPI::getSolenStatue
	// Access:    public 
	// Returns:   void
	// Qualifier: 查询继电器状态
	// Parameter: int * SolenStatue
	//************************************
	DYMECHNICALPLATFORM_API void API_getSolenStatue(int* SolenStatue);
	//************************************
	// Method:    getMotorStatue
	// FullName:  DyMechicalAPI::getMotorStatue
	// Access:    public 
	// Returns:   bool
	// Qualifier: 获取电机运动状态
	// Parameter: int * motorStatue
	//************************************
	DYMECHNICALPLATFORM_API bool API_getMotorStatue(int* motorStatue);
	//************************************
	// Method:    getPlatformStatue
	// FullName:  DyMechicalAPI::getPlatformStatue
	// Access:    public 
	// Returns:   bool
	// Qualifier: 查询指定工作台的输入口状态
	// Parameter: int PlatformNum
	// Parameter: int * platformStatue
	//************************************
	DYMECHNICALPLATFORM_API bool API_getPlatformStatue(int PlatformNum,int platformStatue[8]);
	//************************************
	// Method:    API_getSensorStatue
	// FullName:  API_getSensorStatue
	// Access:    public 
	// Returns:   DYMECHNICALPLATFORM_API bool
	// Qualifier: 查询传感器状态
	// Parameter: int SensorStatue[8]
	//************************************
	DYMECHNICALPLATFORM_API bool API_getSensorStatue(int SensorStatue[8]);
	//************************************
	// Method:    API_getADSensor
	// FullName:  API_getADSensor
	// Access:    public 
	// Returns:   DYMECHNICALPLATFORM_API bool
	// Qualifier: 查询传感器AD值
	// Parameter: double & value
	//************************************
	DYMECHNICALPLATFORM_API bool API_getADSensor(double& value);
	//************************************
	// Method:    API_RcvInit
	// FullName:  API_RcvInit
	// Access:    public 
	// Returns:   DYMECHNICALPLATFORM_API bool
	// Qualifier: 数据接收初始化
	// Parameter: void
	//************************************
	DYMECHNICALPLATFORM_API bool API_RcvInit(void);
};