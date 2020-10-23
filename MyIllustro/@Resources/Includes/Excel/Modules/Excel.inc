;@includeModuleExcel=#@#Includes\Excel\Modules\Excel.inc

[Variables]
Excel=excel
ExcelExe=#Excel#.exe

;___Excel___
	[MeasureExcelProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#ExcelExe#

	[MeasureExcelCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#Excel#

	[MeasureExcelRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#Excel#

	[MeasureExcelRAMforScaling]
	Measure=Calc
	Formula=MeasureExcelRAM

	[MeasureExcelIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#Excel#

	[MeasureExcelIORforScaling]
	Measure=Calc
	Formula=MeasureExcelIOR

	[MeasureExcelIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#Excel#

	[MeasureExcelIOWforScaling]
	Measure=Calc
	Formula=MeasureExcelIOW

	[ToggleExcel]
	Measure=Calc
	IfCondition=MeasureExcelProcess > 0
	IfTrueAction=[!SetOption MeterExcelProcess MeterStyle styleRightTextON][!SetOption MeterExcelImage GreyScale 0][!EnableMouseAction MeterExcelImage "LeftMouseUpAction"][!SetOption MeterExcelImage ToolTipHidden 0][!SetOption MeterExcelLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterExcelProcess MeterStyle styleRightTextOFF][!SetOption MeterExcelImage GreyScale 1][!DisableMouseAction MeterExcelImage "LeftMouseUpAction"][!SetOption MeterExcelImage ToolTipHidden 1][!SetOption MeterExcelLabel ToolTipHidden 1]
