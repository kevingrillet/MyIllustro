;@includeModuleWord=#@#Includes\Word\Modules\Word.inc

[Variables]
Word=winword
WordExe=#Word#.exe

;___Word___
	[MeasureWordProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#WordExe#

	[MeasureWordCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#Word#

	[MeasureWordRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#Word#

	[MeasureWordRAMforScaling]
	Measure=Calc
	Formula=MeasureWordRAM

	[MeasureWordIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#Word#

	[MeasureWordIORforScaling]
	Measure=Calc
	Formula=MeasureWordIOR

	[MeasureWordIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#Word#

	[MeasureWordIOWforScaling]
	Measure=Calc
	Formula=MeasureWordIOW

	[ToggleWord]
	Measure=Calc
	IfCondition=MeasureWordProcess > 0
	IfTrueAction=[!SetOption MeterWordProcess MeterStyle styleRightTextON][!SetOption MeterWordImage GreyScale 0][!EnableMouseAction MeterWordImage "LeftMouseUpAction"][!SetOption MeterWordImage ToolTipHidden 0][!SetOption MeterWordLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterWordProcess MeterStyle styleRightTextOFF][!SetOption MeterWordImage GreyScale 1][!DisableMouseAction MeterWordImage "LeftMouseUpAction"][!SetOption MeterWordImage ToolTipHidden 1][!SetOption MeterWordLabel ToolTipHidden 1]
