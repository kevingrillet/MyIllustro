;@includeLayoutRecycleBinSize=#@#Includes\System\Layouts\RecycleBin.Size.inc

[IncludesModules]
@includeModuleRecycleBinSize=#@#Includes\System\Modules\RecycleBin.Size.inc

;___TO USE
; yRecycleBinSize=(#yOffsetLine#*2)

;___RECYCLEBINSIZE___
	[meterRecycleBinSizeLabel]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yRecycleBinSize#
	W=#wProcess#
	H=#hText#
	Text="Taille :"

	[meterRecycleBinSizeValue]
	Meter=String
	MeasureName=measureRecycleBinSize
	MeterStyle=styleRightText
	X=#xProcess#
	Y=#yRecycleBinSize#
	W=#wProcess#
	H=#hText#
	Text="%1B"
    AutoScale=1
	NumOfDecimals=2
