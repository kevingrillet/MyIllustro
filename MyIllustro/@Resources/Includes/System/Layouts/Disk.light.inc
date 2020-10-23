;@includeLayoutDiskLight=#@#Includes\System\Layouts\Disk.Light.inc

[IncludesModules]
@includeModuleDisk=#@#Includes\System\Modules\Disk.inc

    [meterDriveReadsOn]
    Meter=IMAGE
    X=#xImage#
    Y=#yDiskLight#
    W=#sPicture#
    H=#sPicture#
    ImageName=#@#Includes\System\Images\Disk.LightGreen.png
    Hidden=1

    [meterDriveReadsOff]
    Meter=IMAGE
    X=#xImage#
    Y=#yDiskLight#
    W=#sPicture#
    H=#sPicture#
    ImageName=#@#Includes\System\Images\Disk.LightOff.png
    Hidden=0

    [meterDriveWritesOn]
    Meter=IMAGE
	X=(#xImage#+#sPicture#)
	Y=#yDiskLight#
	W=#sPicture#
	H=#sPicture#
    ImageName=#@#Includes\System\Images\Disk.LightRed.png
    Hidden=1

    [meterDriveWritesOff]
    Meter=IMAGE
	X=(#xImage#+#sPicture#)
	Y=#yDiskLight#
	W=#sPicture#
	H=#sPicture#
    ImageName=#@#Includes\System\Images\Disk.LightOff.png
    Hidden=0
