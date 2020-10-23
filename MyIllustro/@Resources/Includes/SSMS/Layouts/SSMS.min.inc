;@includeLayoutSSMS=#@#Includes\SSMS\Layouts\SSMS.min.inc

[IncludesModules]
@includeModuleSSMS=#@#Includes\SSMS\Modules\SSMS.inc

;___SSMS___
	[MeterSSMSImage]
	Meter=Image
	ImageName=#@#Includes\SSMS\Images\SSMS.png
	X=#xImage#
	Y=#ySSMS#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#SSMSExe#"]
	ToolTipTitle=taskkill #SSMSExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #SSMSExe# /f
	DynamicVariables=1

	[MeterSSMSLabel]
	Meter=String
	MeterStyle=styleLeftText
	MeasureName=MeasureSSMSRAMforScaling
	MeasureName2=MeasureSSMSIORforScaling
	MeasureName3=MeasureSSMSIOWforScaling
	X=#xLabel#
	Y=#ySSMS#
	W=#wLabel#
	H=#hText#
	Text=SSMS [#SSMSExe#]
	ToolTipTitle=#SSMS#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [MeasureSSMSCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[MeterSSMSProcess]
	Meter=String
	MeasureName=MeasureSSMS
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
