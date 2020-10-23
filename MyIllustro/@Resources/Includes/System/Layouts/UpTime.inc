;@includeLayoutUpTime=#@#Includes\System\Layouts\UpTime.inc

[IncludesModules]
@includeModuleUpTime=#@#Includes\System\Modules\UpTime.inc

;___TO USE
; yUpTime=(#yOffsetLine#*2)

;___UPTIME___
	[meterSystemImageUptime]
	Meter=Image
	ImageName=#@#Includes\System\Images\UpTime.png
	X=#xImage#
	Y=#yUpTime#
	W=#sPicture#
	H=#sPicture#

	[meterSystemLabelUptime]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yUpTime#
	W=#wProcess#
	H=#hText#
	Text="Uptime"

	[meterSystemUptime]
	Meter=String
	MeasureName=measureSystemFormatSeconds
	MeterStyle=styleRightText
	X=#xProcess#
	Y=#yUpTime#
	W=#wProcess#
	H=#hText#
	Text="%1"
