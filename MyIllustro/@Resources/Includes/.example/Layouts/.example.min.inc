;@includeLayout.example=#@#Includes\.example\Layouts\.example.min.inc

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
	MeasureName=Measure.exampleRAMforScaling
	MeasureName2=Measure.exampleIORforScaling
	MeasureName3=Measure.exampleIOWforScaling
	X=#xLabel#
	Y=#y.example#
	W=#wLabel#
	H=#hText#
	Text=.example [#.exampleExe#]
	ToolTipTitle=#.example#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [Measure.exampleCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[Meter.exampleProcess]
	Meter=String
	MeasureName=Measure.example
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
