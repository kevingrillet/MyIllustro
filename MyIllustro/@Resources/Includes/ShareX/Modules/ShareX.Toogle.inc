;@includeModuleShareXToogle=#@#Includes\ShareX\Modules\ShareX.Toogle.inc

;___TO USE
;ShareX=ShareX
;ShareXExe=#ShareX#.exe

;___ShareX___
	[MeasureShareXProcess]
	Measure=Plugin
	Plugin=Process
	ProcessName=#ShareXExe#

    [ToggleShareX]
	Measure=Calc
	IfCondition=MeasureShareXProcess > 0
	IfTrueAction=[!SetOption MeterShareXIcon GreyScale 0][!EnableMouseAction MeterShareXIcon "LeftMouseUpAction"][!SetOption MeterShareXIcon ToolTipHidden 0]
	IfFalseAction=[!SetOption MeterShareXIcon GreyScale 1][!DisableMouseAction MeterShareXIcon "LeftMouseUpAction"][!SetOption MeterShareXIcon ToolTipHidden 1]