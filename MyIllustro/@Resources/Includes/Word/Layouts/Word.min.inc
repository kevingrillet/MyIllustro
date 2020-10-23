;@includeLayoutWord=#@#Includes\Word\Layouts\Word.min.inc

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
	MeasureName=MeasureWordRAMforScaling
	MeasureName2=MeasureWordIORforScaling
	MeasureName3=MeasureWordIOWforScaling
	X=#xLabel#
	Y=#yWord#
	W=#wLabel#
	H=#hText#
	Text=Word [#WordExe#]
	ToolTipTitle=#Word#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [MeasureWordCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[MeterWordProcess]
	Meter=String
	MeasureName=MeasureWord
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
