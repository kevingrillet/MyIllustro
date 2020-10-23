;@includeModuleMSSQL=#@#Includes\MSSQL\Modules\MSSQL.inc

[Variables]
MSSQL=sqlservr
MSSQLExe=#MSSQL#.exe

;___MSSQL___
	[MeasureMSSQLProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#MSSQLExe#

	[MeasureMSSQLCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#MSSQL#

	[MeasureMSSQLRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#MSSQL#

	[MeasureMSSQLRAMforScaling]
	Measure=Calc
	Formula=MeasureMSSQLRAM

	[MeasureMSSQLIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#MSSQL#

	[MeasureMSSQLIORforScaling]
	Measure=Calc
	Formula=MeasureMSSQLIOR

	[MeasureMSSQLIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#MSSQL#

	[MeasureMSSQLIOWforScaling]
	Measure=Calc
	Formula=MeasureMSSQLIOW

	[ToggleMSSQL]
	Measure=Calc
	IfCondition=MeasureMSSQLProcess > 0
	IfTrueAction=[!SetOption MeterMSSQLProcess MeterStyle styleRightTextON][!SetOption MeterMSSQLImage GreyScale 0][!EnableMouseAction MeterMSSQLImage "LeftMouseUpAction"][!SetOption MeterMSSQLImage ToolTipHidden 0][!SetOption MeterMSSQLLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterMSSQLProcess MeterStyle styleRightTextOFF][!SetOption MeterMSSQLImage GreyScale 1][!DisableMouseAction MeterMSSQLImage "LeftMouseUpAction"][!SetOption MeterMSSQLImage ToolTipHidden 1][!SetOption MeterMSSQLLabel ToolTipHidden 1]
