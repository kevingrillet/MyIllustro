;@includeLayoutDisk1=#@#Includes\System\Layouts\Disk.1.inc

[IncludesModules]
@includeModuleDisk1=#@#Includes\System\Modules\Disk.1.inc

	[meterSystemImageDisk1]
	Meter=Image
	ImageName=#@#Includes\System\Images\Disk.png
	X=#xImage#
	Y=#yDisk1#
	W=#sPicture#
	H=#sPicture#

    [meterLabelDisk1]
    Meter=String
    MeterStyle=styleLeftText
    MeasureName=measureLabelDisk1
	X=#xLabel#
	Y=(#yDisk1#)
	W=#wProcess#
	H=#hText#
    Text=#disk1#\ (%1)

    [meterValueDisk1]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureUsedDisk1
    MeasureName2=measureTotalDisk1
	X=#xProcess#
	Y=(#yDisk1#)
	W=#wProcess#
	H=#hText#
    Text=%1B/%2B
    NumOfDecimals=1
    AutoScale=1
    LeftMouseUpAction=["#disk1#\"]
	ToolTipText=Ouvrir #disk1#\

    [meterBarDisk1]
    Meter=Bar
    MeterStyle=styleBar
    MeasureName=measureUsedDisk1
	X=#xBar#
	Y=(#yDisk1#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
