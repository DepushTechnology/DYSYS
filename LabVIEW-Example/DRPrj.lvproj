<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="11008008">
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="API" Type="Folder" URL="../API">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="CheckIO.vi" Type="VI" URL="../CheckIO.vi"/>
		<Item Name="F1Machine.vi" Type="VI" URL="../F1Machine.vi"/>
		<Item Name="F2Machine.vi" Type="VI" URL="../F2Machine.vi"/>
		<Item Name="F3Machine_1.vi" Type="VI" URL="../F3Machine_1.vi"/>
		<Item Name="F3Machine_2.vi" Type="VI" URL="../F3Machine_2.vi"/>
		<Item Name="GetColorDis.vi" Type="VI" URL="../GetColorDis.vi"/>
		<Item Name="GetInputStatue.vi" Type="VI" URL="../GetInputStatue.vi"/>
		<Item Name="GetSensorStatue.vi" Type="VI" URL="../GetSensorStatue.vi"/>
		<Item Name="HelloDev.vi" Type="VI" URL="../HelloDev.vi"/>
		<Item Name="IOControl.vi" Type="VI" URL="../IOControl.vi"/>
		<Item Name="Machine.vi" Type="VI" URL="../Machine.vi"/>
		<Item Name="MotorRun.vi" Type="VI" URL="../MotorRun.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="F1State.ctl" Type="VI" URL="../F1State.ctl"/>
			<Item Name="MachineState.ctl" Type="VI" URL="../MachineState.ctl"/>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
