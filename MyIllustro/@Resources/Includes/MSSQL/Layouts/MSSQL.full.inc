;@includeLayoutMSSQL=#@#Includes\MSSQL\Layouts\MSSQL.full.inc

[IncludesModules]
@includeModuleMSSQL=#@#Includes\MSSQL\Modules\MSSQL.inc

;___MSSQL___
	[MeterMSSQLImage]
	Meter=Image
	ImageName=#@#Includes\MSSQL\Images\MSSQL.png
	X=#xImage#
	Y=#yMSSQL#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#MSSQLExe#"]
	ToolTipTitle=taskkill #MSSQLExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #MSSQLExe# /f
	DynamicVariables=1

	[MeterMSSQLLabel]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yMSSQL#
	W=#wLabel#
	H=#hText#
	Text=MSSQL [#MSSQLExe#]

	[MeterMSSQLProcess]
	Meter=String
	MeasureName=MeasureMSSQL
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[LabelMSSQLCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yMSSQL#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[MeterMSSQLCPU]
	Meter=String
	MeasureName=MeasureMSSQLCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yMSSQL#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[MeasureMSSQLCPU:1]%

	[LabelMSSQLRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yMSSQL#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[MeterMSSQLRAM]
	Meter=String
	MeasureName=MeasureMSSQLRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yMSSQL#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[LabelMSSQLIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yMSSQL#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[MeterMSSQLIOR]
	Meter=String
	MeasureName=MeasureMSSQLIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yMSSQL#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[LabelMSSQLIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yMSSQL#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[MeterMSSQLIOW]
	Meter=String
	MeasureName=MeasureMSSQLIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yMSSQL#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[MeterMSSQLSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yMSSQL#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
