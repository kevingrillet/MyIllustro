;@includeModuleDisk2=#@#Includes\System\Modules\Disk.2.inc

;___Disk2___
    [measureLabelDisk2]
    Measure=FreeDiskSpace
    Drive=#disk2#
    Label=1
    UpdateDivider=5

    [measureTotalDisk2]
    Measure=FreeDiskSpace
    Drive=#disk2#
    Total=1
    UpdateDivider=120

    [measureUsedDisk2]
    Measure=FreeDiskSpace
    Drive=#disk2#
    InvertMeasure=1
    UpdateDivider=120
