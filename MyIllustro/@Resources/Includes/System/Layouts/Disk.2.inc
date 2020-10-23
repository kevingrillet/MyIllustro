;@includeLayoutDisk2=#@#Includes\System\Layouts\Disk.2.inc

[IncludesModules]
@includeModuleDisk2=#@#Includes\System\Modules\Disk.2.inc

	[meterSystemImageDisk2]
	Meter=Image
	ImageName=#@#Includes\System\Images\Disk.png
	X=#xImage#
	Y=#yDisk2#
	W=#sPicture#
	H=#sPicture#

    [meterLabelDisk2]
    Meter=String
    MeterStyle=styleLeftText
    MeasureName=measureLabelDisk2
	X=#xLabel#
	Y=#yDisk2#
	W=#wProcess#
	H=#hText#
    Text=#Disk2#\ (%1)

    [meterValueDisk2]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureUsedDisk2
    MeasureName2=measureTotalDisk2
	X=#xProcess#
	Y=#yDisk2#
	W=#wProcess#
	H=#hText#
    Text=%1B/%2B
    NumOfDecimals=1
    AutoScale=1
    LeftMouseUpAction=["#Disk2#\"]
	ToolTipText=Ouvrir #disk2#\

    [meterBarDisk2]
    Meter=Bar
    MeterStyle=styleBar
    MeasureName=measureUsedDisk2
	X=#xBar#
	Y=(#yDisk2#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
