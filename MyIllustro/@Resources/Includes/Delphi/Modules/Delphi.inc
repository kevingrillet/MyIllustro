;@includeModuleDelphi=#@#Includes\Delphi\Modules\Delphi.inc

[Variables]
Delphi=bds
DelphiExe=#Delphi#.exe

;___Delphi___
	[MeasureDelphiProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#DelphiExe#

	[MeasureDelphiCPU]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=CPU
	Name=#Delphi#

	[MeasureDelphiRAM]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=RAM
	Name=#Delphi#

	[MeasureDelphiRAMforScaling]
	Measure=Calc
	Formula=MeasureDelphiRAM

	[MeasureDelphiIOR]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOREAD
	Name=#Delphi#

	[MeasureDelphiIORforScaling]
	Measure=Calc
	Formula=MeasureDelphiIOR

	[MeasureDelphiIOW]
	Measure=Plugin
	Plugin=UsageMonitor
	Alias=IOWRITE
	Name=#Delphi#

	[MeasureDelphiIOWforScaling]
	Measure=Calc
	Formula=MeasureDelphiIOW

	[ToggleDelphi]
	Measure=Calc
	IfCondition=MeasureDelphiProcess > 0
	IfTrueAction=[!SetOption MeterDelphiProcess MeterStyle styleRightTextON][!SetOption MeterDelphiImage GreyScale 0][!EnableMouseAction MeterDelphiImage "LeftMouseUpAction"][!SetOption MeterDelphiImage ToolTipHidden 0][!SetOption MeterDelphiLabel ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterDelphiProcess MeterStyle styleRightTextOFF][!SetOption MeterDelphiImage GreyScale 1][!DisableMouseAction MeterDelphiImage "LeftMouseUpAction"][!SetOption MeterDelphiImage ToolTipHidden 1][!SetOption MeterDelphiLabel ToolTipHidden 1]
