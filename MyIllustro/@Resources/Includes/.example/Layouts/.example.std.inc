;@includeLayout.example=#@#Includes\.example\Layouts\.example.std.inc

[IncludesModules]
@includeModule.example=#@#Includes\.example\Modules\.example.inc

;___.example___
	[Meter.exampleImage]
	Meter=Image
	ImageName=#@#Includes\.example\Images\.example.png
	X=#xImage#
	Y=#y.example#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#.exampleExe#"]
	ToolTipTitle=taskkill #.exampleExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #.exampleExe# /f
	DynamicVariables=1

	[Meter.exampleLabel]
	Meter=String
	MeterStyle=styleLeftText
	MeasureName=Measure.exampleIORforScaling
	MeasureName2=Measure.exampleIOWforScaling
	X=#xLabel#
	Y=#y.example#
	W=#wLabel#
	H=#hText#
	Text=.example [#.exampleExe#]
	ToolTipTitle=#.example#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[Meter.exampleProcess]
	Meter=String
	MeasureName=Measure.example
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[Meter.exampleCPU]
	Meter=String
	MeasureName=Measure.exampleCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#y.example#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [Measure.exampleCPU:1]%

	[Meter.exampleRAM]
	Meter=String
	MeasureName=Measure.exampleRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#y.example#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[Meter.exampleSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#y.example#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
