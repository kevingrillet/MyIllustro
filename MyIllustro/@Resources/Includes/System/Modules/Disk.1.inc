;@includeModuleDisk1=#@#Includes\System\Modules\Disk.1.inc

;___Disk1___
    [measureLabelDisk1]
    Measure=FreeDiskSpace
    Drive=#disk1#
    Label=1
    UpdateDivider=5

    [measureTotalDisk1]
    Measure=FreeDiskSpace
    Drive=#disk1#
    Total=1
    UpdateDivider=120

    [measureUsedDisk1]
    Measure=FreeDiskSpace
    Drive=#disk1#
    InvertMeasure=1
    UpdateDivider=120
