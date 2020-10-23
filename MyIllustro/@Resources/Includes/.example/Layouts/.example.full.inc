;@includeLayout.example=#@#Includes\.example\Layouts\.example.full.inc

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
	X=#xLabel#
	Y=#y.example#
	W=#wLabel#
	H=#hText#
	Text=.example [#.exampleExe#]

	[Meter.exampleProcess]
	Meter=String
	MeasureName=Measure.example
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[Label.exampleCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#y.example#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[Meter.exampleCPU]
	Meter=String
	MeasureName=Measure.exampleCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#y.example#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[Measure.exampleCPU:1]%

	[Label.exampleRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#y.example#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[Meter.exampleRAM]
	Meter=String
	MeasureName=Measure.exampleRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#y.example#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[Label.exampleIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#y.example#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[Meter.exampleIOR]
	Meter=String
	MeasureName=Measure.exampleIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#y.example#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[Label.exampleIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#y.example#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[Meter.exampleIOW]
	Meter=String
	MeasureName=Measure.exampleIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#y.example#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[Meter.exampleSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#y.example#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
