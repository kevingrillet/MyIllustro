;@includeLayoutSSMS=#@#Includes\SSMS\Layouts\SSMS.std.inc

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
	MeasureName=MeasureSSMSIORforScaling
	MeasureName2=MeasureSSMSIOWforScaling
	X=#xLabel#
	Y=#ySSMS#
	W=#wLabel#
	H=#hText#
	Text=SSMS [#SSMSExe#]
	ToolTipTitle=#SSMS#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[MeterSSMSProcess]
	Meter=String
	MeasureName=MeasureSSMS
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[MeterSSMSCPU]
	Meter=String
	MeasureName=MeasureSSMSCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#ySSMS#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [MeasureSSMSCPU:1]%

	[MeterSSMSRAM]
	Meter=String
	MeasureName=MeasureSSMSRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#ySSMS#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[MeterSSMSSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#ySSMS#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
