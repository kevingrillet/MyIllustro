;@includeLayoutExcel=#@#Includes\Excel\Layouts\Excel.full.inc

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
	X=#xLabel#
	Y=#yExcel#
	W=#wLabel#
	H=#hText#
	Text=Excel [#ExcelExe#]

	[MeterExcelProcess]
	Meter=String
	MeasureName=MeasureExcel
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#

	[LabelExcelCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yExcel#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=CPU :

	[MeterExcelCPU]
	Meter=String
	MeasureName=MeasureExcelCPU
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yExcel#+#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=[MeasureExcelCPU:1]%

	[LabelExcelRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yExcel#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=RAM :

	[MeterExcelRAM]
	Meter=String
	MeasureName=MeasureExcelRAMforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yExcel#+2*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B

	[LabelExcelIOR]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yExcel#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IORead :

	[MeterExcelIOR]
	Meter=String
	MeasureName=MeasureExcelIORforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yExcel#+3*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[LabelExcelIOW]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=(#yExcel#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	Text=IOWrite :

	[MeterExcelIOW]
	Meter=String
	MeasureName=MeasureExcelIOWforScaling
	MeterStyle=styleRightText
	X=#xProcess#
	Y=(#yExcel#+4*#yOffsetLine#)
	W=#wProcess#
	H=#hText#
	AutoScale=1
	NumOfDecimals=1
	DynamicVariables=1
	Text=%1B/s

	[MeterExcelSeperator]
	Meter=Image
	MeterStyle=styleSeperator
	X=#xImage#
	Y=(#yExcel#+4*#yOffsetLine#+#yOffsetSeparator#)
	W=#wProcess#
	H=#hSeparator#
