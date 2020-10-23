;@includeModuleSSMS=#@#Includes\SSMS\Modules\SSMS.inc

[Variables]
SSMS=Ssms
SSMSExe=#SSMS#.exe

;___SSMS___
	[MeasureSSMSProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#SSMSExe#

	[MeasureSSMSCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#SSMS#

	[MeasureSSMSRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#SSMS#

	[MeasureSSMSRAMforScaling]
	Measure=Calc
	Formula=MeasureSSMSRAM

	[MeasureSSMSIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#SSMS#

	[MeasureSSMSIORforScaling]
	Measure=Calc
	Formula=MeasureSSMSIOR

	[MeasureSSMSIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#SSMS#

	[MeasureSSMSIOWforScaling]
	Measure=Calc
	Formula=MeasureSSMSIOW

	[ToggleSSMS]
	Measure=Calc
	IfCondition=MeasureSSMSProcess > 0
	IfTrueAction=[!SetOption MeterSSMSProcess MeterStyle styleRightTextON][!SetOption MeterSSMSImage GreyScale 0][!EnableMouseAction MeterSSMSImage "LeftMouseUpAction"][!SetOption MeterSSMSImage ToolTipHidden 0][!SetOption MeterSSMSLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterSSMSProcess MeterStyle styleRightTextOFF][!SetOption MeterSSMSImage GreyScale 1][!DisableMouseAction MeterSSMSImage "LeftMouseUpAction"][!SetOption MeterSSMSImage ToolTipHidden 1][!SetOption MeterSSMSLabel ToolTipHidden 1]
