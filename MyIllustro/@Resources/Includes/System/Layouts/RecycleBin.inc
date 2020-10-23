;@includeLayoutRecycleBin=#@#Includes\System\Layouts\RecycleBin.inc

[IncludesModules]
@includeModuleRecycleBinSize=#@#Includes\System\Modules\RecycleBin.Size.inc
@includeModuleRecycleBinToogle=#@#Includes\System\Modules\RecycleBin.Toogle.inc

;___TO USE
; yRecycleBin=(#yOffsetLine#*2)

;___RECYCLEBIN___
	[meterImageRecycleBinEmpty]
	Meter=Image
	ImageName=#@#Includes\System\Images\RecycleBin.Empty.jpeg
	X=#xImage#
	Y=#yRecycleBin#
	W=#sPicture#
	H=#sPicture#

	[meterImageRecycleBinFull]
	Meter=Image
	ImageName=#@#Includes\System\Images\RecycleBin.Full.jpeg
	X=#xImage#
	Y=#yRecycleBin#
	W=#sPicture#
	H=#sPicture#
	Hidden=1
	LeftMouseUpAction=!CommandMeasure measureRecycleBinSize EmptyBin
	ToolTipText=Vider la Corbeille

	[meterLabelRecycleBin]
	Meter=String
	MeasureName=measureRecycleBinSize
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yRecycleBin#
	W=#wProcess#
	H=#hText#
	Text="Corbeille"
	LeftMouseUpAction=!CommandMeasure measureRecycleBinSize OpenBin
	ToolTipText=Ouvrir la Corbeille