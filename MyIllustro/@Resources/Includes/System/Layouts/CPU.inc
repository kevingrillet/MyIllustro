;@includeLayoutSystem=#@#Includes\System\Layouts\CPU.inc

[IncludesModules]
@includeModuleSystem=#@#Includes\System\Modules\CPU.inc

;___TO USE
; yCPU=(#yOffsetLine#*2)

;___CPU___	
	[meterSystemImageCPU]
	Meter=Image
	ImageName=#@#Includes\System\Images\CPU.png
	X=#xImage#
	Y=#yCPU#
	W=#sPicture#
	H=#sPicture#

	[meterLabelCPU]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yCPU#
	W=#wProcess#
	H=#hText#
	Text=CPU

	[meterValueCPU]
	Meter=String
	MeterStyle=styleRightText
	MeasureName=measureCPU
	X=#xProcess#
	Y=#yCPU#
	W=#wProcess#
	H=#hText#
	Text=%1%

	[meterBarCPU]
	Meter=Bar
	MeterStyle=styleBar
	MeasureName=measureCPU
	X=#xBar#
	Y=(#yCPU#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
