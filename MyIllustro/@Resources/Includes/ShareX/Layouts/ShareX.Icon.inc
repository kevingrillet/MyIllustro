;@includeLayoutShareXIcon=#@#Includes\ShareX\Layouts\ShareX.Icon.inc

[IncludesModules]
@includeModuleShareXToogle=#@#Includes\ShareX\Modules\ShareX.Toogle.inc

;___TO USE
; yShareXIcon=(#yOffsetLine#*2)

;___SHAREXICON___
	[MeterShareXIcon]
	Meter=Image
	ImageName=#@#Includes\ShareX\Images\ShareX.png
    X=#xImage#
    Y=#yShareXIcon#
    W=#sPicture#
    H=#sPicture#
	LeftMouseUpAction=["#@#Plugins\TaskKiller.exe" "#ShareXExe#"]
	ToolTipTitle=taskkill #ShareXExe#
	ToolTipType=1
	ToolTipIcon=WARNING
	ToolTipText=taskkill /im #ShareXExe# /f
	DynamicVariables=1