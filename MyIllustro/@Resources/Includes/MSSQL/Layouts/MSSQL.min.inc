;@includeLayoutMSSQL=#@#Includes\MSSQL\Layouts\MSSQL.min.inc

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
	MeasureName=MeasureMSSQLRAMforScaling
	MeasureName2=MeasureMSSQLIORforScaling
	MeasureName3=MeasureMSSQLIOWforScaling
	X=#xLabel#
	Y=#yMSSQL#
	W=#wLabel#
	H=#hText#
	Text=MSSQL [#MSSQLExe#]
	ToolTipTitle=#MSSQL#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [MeasureMSSQLCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[MeterMSSQLProcess]
	Meter=String
	MeasureName=MeasureMSSQL
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
