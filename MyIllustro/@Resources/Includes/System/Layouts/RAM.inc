;@includeLayoutRAM=#@#Includes\System\Layouts\RAM.inc

[IncludesModules]
@includeModuleRAM=#@#Includes\System\Modules\RAM.inc

;___TO USE
; yRAM=(#yOffsetLine#*2)

;___RAM___
	[meterSystemImageRAM]
	Meter=Image
	ImageName=#@#Includes\System\Images\RAM.png
	X=#xImage#
	Y=#yRAM#
	W=#sPicture#
	H=#sPicture#

	[meterLabelRAM]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yRAM#
	W=#wProcess#
	H=#hText#
	Text=RAM

	[meterValueRAM]
	Meter=String
	MeterStyle=styleRightText
	MeasureName=measureRAM
	X=#xProcess#
	Y=#yRAM#
	W=#wProcess#
	H=#hText#
	Text=%1%
	Percentual=1

	[meterBarRAM]
	Meter=Bar
	MeterStyle=styleBar
	MeasureName=measureRAM
	X=#xBar#
	Y=(#yRAM#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
