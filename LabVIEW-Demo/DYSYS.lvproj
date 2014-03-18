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
		<Item Name="API" Type="Folder">
			<Item Name="API DYM.lvlib" Type="Library" URL="../API/API DYM.lvlib"/>
			<Item Name="ColorSensorlib.lvlib" Type="Library" URL="../API/ColorSensorlib.lvlib"/>
		</Item>
		<Item Name="BlueControl85" Type="Folder">
			<Item Name="Button.ctl" Type="VI" URL="../BlueControl85.llb/Button.ctl"/>
			<Item Name="Combo Box.ctl" Type="VI" URL="../BlueControl85.llb/Combo Box.ctl"/>
			<Item Name="Dial.ctl" Type="VI" URL="../BlueControl85.llb/Dial.ctl"/>
			<Item Name="Enum.ctl" Type="VI" URL="../BlueControl85.llb/Enum.ctl"/>
			<Item Name="Gauge.ctl" Type="VI" URL="../BlueControl85.llb/Gauge.ctl"/>
			<Item Name="Horizontal Fill Slide.ctl" Type="VI" URL="../BlueControl85.llb/Horizontal Fill Slide.ctl"/>
			<Item Name="Horizontal Point Slide.ctl" Type="VI" URL="../BlueControl85.llb/Horizontal Point Slide.ctl"/>
			<Item Name="Knob.ctl" Type="VI" URL="../BlueControl85.llb/Knob.ctl"/>
			<Item Name="LED.ctl" Type="VI" URL="../BlueControl85.llb/LED.ctl"/>
			<Item Name="Numeric.ctl" Type="VI" URL="../BlueControl85.llb/Numeric.ctl"/>
			<Item Name="Path.ctl" Type="VI" URL="../BlueControl85.llb/Path.ctl"/>
			<Item Name="Ring.ctl" Type="VI" URL="../BlueControl85.llb/Ring.ctl"/>
			<Item Name="Square Button.ctl" Type="VI" URL="../BlueControl85.llb/Square Button.ctl"/>
			<Item Name="String.ctl" Type="VI" URL="../BlueControl85.llb/String.ctl"/>
			<Item Name="Vertical Fill Slide.ctl" Type="VI" URL="../BlueControl85.llb/Vertical Fill Slide.ctl"/>
			<Item Name="Vertical Point Slide.ctl" Type="VI" URL="../BlueControl85.llb/Vertical Point Slide.ctl"/>
			<Item Name="Waveform Chart.ctl" Type="VI" URL="../BlueControl85.llb/Waveform Chart.ctl"/>
			<Item Name="Waveform Graph.ctl" Type="VI" URL="../BlueControl85.llb/Waveform Graph.ctl"/>
		</Item>
		<Item Name="calcupposfunc.vi" Type="VI" URL="../calcupposfunc.vi"/>
		<Item Name="Check.vi" Type="VI" URL="../Check.vi"/>
		<Item Name="CheckTure.vi" Type="VI" URL="../CheckTure.vi"/>
		<Item Name="ColorSensorDemo.vi" Type="VI" URL="../ColorSensorDemo.vi"/>
		<Item Name="DelayPlat3.vi" Type="VI" URL="../DelayPlat3.vi"/>
		<Item Name="FirstDumper_Enable.vi" Type="VI" URL="../FirstDumper_Enable.vi"/>
		<Item Name="InitConfig.vi" Type="VI" URL="../InitConfig.vi"/>
		<Item Name="mainui.vi" Type="VI" URL="../mainui.vi"/>
		<Item Name="Plat1Take.vi" Type="VI" URL="../Plat1Take.vi"/>
		<Item Name="QueueMotorStart.vi" Type="VI" URL="../QueueMotorStart.vi"/>
		<Item Name="QueueSolenAct.vi" Type="VI" URL="../QueueSolenAct.vi"/>
		<Item Name="QueueSolenAdv.vi" Type="VI" URL="../QueueSolenAdv.vi"/>
		<Item Name="SecondDumper_Enable.vi" Type="VI" URL="../SecondDumper_Enable.vi"/>
		<Item Name="SecondPlatX.vi" Type="VI" URL="../SecondPlatX.vi"/>
		<Item Name="SecondPlatY.vi" Type="VI" URL="../SecondPlatY.vi"/>
		<Item Name="SetSpeedQueue.vi" Type="VI" URL="../SetSpeedQueue.vi"/>
		<Item Name="SpeedControl.vi" Type="VI" URL="../SpeedControl.vi"/>
		<Item Name="ThridPlatX.vi" Type="VI" URL="../ThridPlatX.vi"/>
		<Item Name="ThridPlatY.vi" Type="VI" URL="../ThridPlatY.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="8.6CompatibleGlobalVar.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/config.llb/8.6CompatibleGlobalVar.vi"/>
				<Item Name="Check if File or Folder Exists.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/Check if File or Folder Exists.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="NI_LVConfig.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/config.llb/NI_LVConfig.lvlib"/>
				<Item Name="NI_PackedLibraryUtility.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/LVLibp/NI_PackedLibraryUtility.lvlib"/>
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
