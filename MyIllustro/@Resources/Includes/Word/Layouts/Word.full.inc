;@includeLayoutWord=#@#Includes\Word\Layouts\Word.full.inc

[IncludesModules]
@includeModuleWord=#@#Includes\Word\Modules\Word.inc

;___Word___
	[MeterWordImage]
	Meter=Image
	ImageName=#@#Includes\Word\Images\Word.png
	X=#xImage#
	Y=#yWord#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#WordExe#"]
	ToolTipTitle=taskkill #WordExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #WordExe# /f
	DynamicVariables=1

	[MeterWordLabel]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yWord#
	W=#wLabel#
	H=#hText#
	Text=Word [#WordExe#]

	[MeterWordProcess]
	Meter=String
	MeasureName=MeasureWord
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[LabelWordCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yWord#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[MeterWordCPU]
	Meter=String
	MeasureName=MeasureWordCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yWord#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[MeasureWordCPU:1]%

	[LabelWordRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yWord#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[MeterWordRAM]
	Meter=String
	MeasureName=MeasureWordRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yWord#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[LabelWordIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yWord#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[MeterWordIOR]
	Meter=String
	MeasureName=MeasureWordIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yWord#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[LabelWordIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yWord#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[MeterWordIOW]
	Meter=String
	MeasureName=MeasureWordIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yWord#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[MeterWordSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yWord#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
