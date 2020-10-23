;@includeLayoutDelphi=#@#Includes\Delphi\Layouts\Delphi.min.inc

[IncludesModules]
@includeModuleDelphi=#@#Includes\Delphi\Modules\Delphi.inc

;___Delphi___
	[MeterDelphiImage]
	Meter=Image
	ImageName=#@#Includes\Delphi\Images\Delphi.png
	X=#xImage#
	Y=#yDelphi#
	W=#sPicture#
	H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#DelphiExe#"]
	ToolTipTitle=taskkill #DelphiExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #DelphiExe# /f
	DynamicVariables=1

	[MeterDelphiLabel]
	Meter=String
	MeterStyle=styleLeftText
	MeasureName=MeasureDelphiRAMforScaling
	MeasureName2=MeasureDelphiIORforScaling
	MeasureName3=MeasureDelphiIOWforScaling
	X=#xLabel#
	Y=#yDelphi#
	W=#wLabel#
	H=#hText#
	Text=Delphi [#DelphiExe#]
	ToolTipTitle=#Delphi#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=CPU : [MeasureDelphiCPU:1]%#CRLF#RAM : %1B#CRLF#IORead : %2B/s#CRLF#IOWrite : %3B/s
	DynamicVariables=1

	[MeterDelphiProcess]
	Meter=String
	MeasureName=MeasureDelphi
	MeterStyle=styleRightText
	X=#xProcess#
	Y=0r
	W=#wProcess#
	H=#hText#
