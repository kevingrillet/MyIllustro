;@includeLayoutExcel=#@#Includes\Excel\Layouts\Excel.std.inc

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
	MeasureName=MeasureExcelIORforScaling
	MeasureName2=MeasureExcelIOWforScaling
	X=#xLabel#
	Y=#yExcel#
	W=#wLabel#
	H=#hText#
	Text=Excel [#ExcelExe#]
	ToolTipTitle=#Excel#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=IORead : %1B/s#CRLF#IOWrite : %2B/s
	DynamicVariables=1

	[MeterExcelProcess]
	Meter=String
	MeasureName=MeasureExcel
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[MeterExcelCPU]
	Meter=String
	MeasureName=MeasureExcelCPU
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yExcel#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=CPU : [MeasureExcelCPU:1]%

	[MeterExcelRAM]
	Meter=String
	MeasureName=MeasureExcelRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yExcel#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=RAM : %1B

	[MeterExcelSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yExcel#+#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
