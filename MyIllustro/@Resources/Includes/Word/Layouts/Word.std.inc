;@includeLayoutWord=#@#Includes\Word\Layouts\Word.std.inc

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
	MeasureName=MeasureWordIORforScaling
	MeasureName2=MeasureWordIOWforScaling
	X=#xLabel#
	Y=#yWord#
	W=#wLabel#
	H=#hText#
	Text=Word [#WordExe#]
	ToolTipTitle=#Word#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[MeterWordProcess]
	Meter=String
	MeasureName=MeasureWord
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[MeterWordCPU]
	Meter=String
	MeasureName=MeasureWordCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yWord#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [MeasureWordCPU:1]%

	[MeterWordRAM]
	Meter=String
	MeasureName=MeasureWordRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yWord#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[MeterWordSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yWord#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
