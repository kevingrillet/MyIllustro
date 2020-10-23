;@includeLayoutSSMS=#@#Includes\SSMS\Layouts\SSMS.full.inc

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
	X=#xLabel#
	Y=#ySSMS#
	W=#wLabel#
	H=#hText#
	Text=SSMS [#SSMSExe#]

	[MeterSSMSProcess]
	Meter=String
	MeasureName=MeasureSSMS
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[LabelSSMSCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#ySSMS#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[MeterSSMSCPU]
	Meter=String
	MeasureName=MeasureSSMSCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#ySSMS#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[MeasureSSMSCPU:1]%

	[LabelSSMSRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#ySSMS#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[MeterSSMSRAM]
	Meter=String
	MeasureName=MeasureSSMSRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#ySSMS#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[LabelSSMSIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#ySSMS#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[MeterSSMSIOR]
	Meter=String
	MeasureName=MeasureSSMSIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#ySSMS#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[LabelSSMSIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#ySSMS#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[MeterSSMSIOW]
	Meter=String
	MeasureName=MeasureSSMSIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#ySSMS#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[MeterSSMSSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#ySSMS#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
