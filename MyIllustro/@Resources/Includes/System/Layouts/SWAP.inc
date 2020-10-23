;@includeLayoutSWAP=#@#Includes\System\Layouts\SWAP.inc

[IncludesModules]
@includeModuleSWAP=#@#Includes\System\Modules\SWAP.inc

;___TO USE
; ySWAP=(#yOffsetLine#*2)

;___SWAP___
	[meterLabelSWAP]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#ySWAP#
	W=#wProcess#
	H=#hText#
	Text=SWAP

	[meterValueSWAP]
	Meter=String
	MeterStyle=styleRightText
	MeasureName=measureSWAP
	X=#xProcess#
	Y=#ySWAP#
	W=#wProcess#
	H=#hText#
	Text=%1%
	Percentual=1

	[meterBarSWAP]
	Meter=Bar
	MeterStyle=styleBar
	MeasureName=measureSWAP
	X=#xBar#
	Y=(#ySWAP#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
