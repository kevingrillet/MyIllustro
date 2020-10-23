;@includeLayoutDelphi=#@#Includes\Delphi\Layouts\Delphi.full.inc

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
	X=#xLabel#
	Y=#yDelphi#
	W=#wLabel#
	H=#hText#
	Text=Delphi [#DelphiExe#]

	[MeterDelphiProcess]
	Meter=String
	MeasureName=MeasureDelphi
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[LabelDelphiCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yDelphi#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[MeterDelphiCPU]
	Meter=String
	MeasureName=MeasureDelphiCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yDelphi#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[MeasureDelphiCPU:1]%

	[LabelDelphiRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yDelphi#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[MeterDelphiRAM]
	Meter=String
	MeasureName=MeasureDelphiRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yDelphi#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[LabelDelphiIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yDelphi#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[MeterDelphiIOR]
	Meter=String
	MeasureName=MeasureDelphiIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yDelphi#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[LabelDelphiIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yDelphi#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[MeterDelphiIOW]
	Meter=String
	MeasureName=MeasureDelphiIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yDelphi#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[MeterDelphiSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yDelphi#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
