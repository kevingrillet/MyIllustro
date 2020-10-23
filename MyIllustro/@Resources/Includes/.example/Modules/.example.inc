;@includeModule.example=#@#Includes\.example\Modules\.example.inc

[Variables]
.example=.exeexample
.exampleExe=#.example#.exe

;___.example___
	[Measure.exampleProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#.exampleExe#

	[Measure.exampleCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#.example#

	[Measure.exampleRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#.example#

	[Measure.exampleRAMforScaling]
	Measure=Calc
	Formula=Measure.exampleRAM

	[Measure.exampleIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#.example#

	[Measure.exampleIORforScaling]
	Measure=Calc
	Formula=Measure.exampleIOR

	[Measure.exampleIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#.example#

	[Measure.exampleIOWforScaling]
	Measure=Calc
	Formula=Measure.exampleIOW

	[Toggle.example]
	Measure=Calc
	IfCondition=Measure.exampleProcess > 0
	IfTrueAction=[!SetOption Meter.exampleProcess MeterStyle styleRightTextON][!SetOption Meter.exampleImage GreyScale 0][!EnableMouseAction Meter.exampleImage "LeftMouseUpAction"][!SetOption Meter.exampleImage ToolTipHidden 0][!SetOption Meter.exampleLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption Meter.exampleProcess MeterStyle styleRightTextOFF][!SetOption Meter.exampleImage GreyScale 1][!DisableMouseAction Meter.exampleImage "LeftMouseUpAction"][!SetOption Meter.exampleImage ToolTipHidden 1][!SetOption Meter.exampleLabel ToolTipHidden 1]
