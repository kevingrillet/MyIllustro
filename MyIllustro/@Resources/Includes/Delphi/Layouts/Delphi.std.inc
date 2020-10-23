;@includeLayoutDelphi=#@#Includes\Delphi\Layouts\Delphi.std.inc

[IncludesModules]
@includeModuleDelphi=#@#Includes\Delphi\Modules\Delphi.inc

;___Delphi___
	[MeterDelphiImage]
	Meter=Image
	ImageName=#@#Includes\Delphi\Images\Delphi.png
	X=#xImage#
	Y=#yDelphi#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#DelphiExe#"]
	ToolTipTitle=taskkill #DelphiExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #DelphiExe# /f
	DynamicVariables=1

	[MeterDelphiLabel]
	Meter=String
	MeterStyle=styleLeftText
	MeasureName=MeasureDelphiIORforScaling
	MeasureName2=MeasureDelphiIOWforScaling
	X=#xLabel#
	Y=#yDelphi#
	W=#wLabel#
	H=#hText#
	Text=Delphi [#DelphiExe#]
	ToolTipTitle=#Delphi#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[MeterDelphiProcess]
	Meter=String
	MeasureName=MeasureDelphi
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[MeterDelphiCPU]
	Meter=String
	MeasureName=MeasureDelphiCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yDelphi#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [MeasureDelphiCPU:1]%

	[MeterDelphiRAM]
	Meter=String
	MeasureName=MeasureDelphiRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yDelphi#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[MeterDelphiSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yDelphi#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
