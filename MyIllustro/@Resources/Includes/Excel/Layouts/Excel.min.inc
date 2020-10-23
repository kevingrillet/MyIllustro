;@includeLayoutExcel=#@#Includes\Excel\Layouts\Excel.min.inc

[IncludesModules]
@includeModuleExcel=#@#Includes\Excel\Modules\Excel.inc

;___Excel___
	[MeterExcelImage]
	Meter=Image
	ImageName=#@#Includes\Excel\Images\Excel.png
	X=#xImage#
	Y=#yExcel#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#ExcelExe#"]
	ToolTipTitle=taskkill #ExcelExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #ExcelExe# /f
	DynamicVariables=1

	[MeterExcelLabel]
	Meter=String
	MeterStyle=styleLeftText
	MeasureName=MeasureExcelRAMforScaling
	MeasureName2=MeasureExcelIORforScaling
	MeasureName3=MeasureExcelIOWforScaling
	X=#xLabel#
	Y=#yExcel#
	W=#wLabel#
	H=#hText#
	Text=Excel [#ExcelExe#]
	ToolTipTitle=#Excel#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [MeasureExcelCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[MeterExcelProcess]
	Meter=String
	MeasureName=MeasureExcel
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
