;@includeLayoutMSSQL=#@#Includes\MSSQL\Layouts\MSSQL.std.inc

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
	MeasureName=MeasureMSSQLIORforScaling
	MeasureName2=MeasureMSSQLIOWforScaling
	X=#xLabel#
	Y=#yMSSQL#
	W=#wLabel#
	H=#hText#
	Text=MSSQL [#MSSQLExe#]
	ToolTipTitle=#MSSQL#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[MeterMSSQLProcess]
	Meter=String
	MeasureName=MeasureMSSQL
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[MeterMSSQLCPU]
	Meter=String
	MeasureName=MeasureMSSQLCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yMSSQL#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [MeasureMSSQLCPU:1]%

	[MeterMSSQLRAM]
	Meter=String
	MeasureName=MeasureMSSQLRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yMSSQL#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[MeterMSSQLSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yMSSQL#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
