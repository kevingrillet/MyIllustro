;@includeModuleDisk=#@#Includes\System\Modules\Disk.inc

;___Disk___
    [measureDiskReads]
    Measure=Plugin
    Plugin=PerfMon.dll
    PerfMonObject=PhysicalDisk
    PerfMonCounter="Disk Reads/sec"
    PerfMonInstance="_Total"
    PerfMonDifference=1

    [measureDiskWrites]
    Measure=Plugin
    Plugin=PerfMon.dll
    PerfMonObject=PhysicalDisk
    PerfMonCounter="Disk Writes/sec"
    PerfMonInstance="_Total"
    PerfMonDifference=1

    [readsAction]
    Measure=Calc
    Formula=measureDiskReads
    IfAboveAction=!execute [!RainmeterHideMeter MeterDriveReadsOff][!RainmeterShowMeter MeterDriveReadsOn]
    IfAboveValue=0
    IfEqualAction=!execute [!RainmeterHideMeter MeterDriveReadsOn][!RainmeterShowMeter MeterDriveReadsOff]
    IfEqualValue=0

    [writesAction]
    Measure=Calc
    Formula=measureDiskWrites
    IfAboveAction=!execute [!RainmeterHideMeter MeterDriveWritesOff][!RainmeterShowMeter MeterDriveWritesOn]
    IfAboveValue=0
    IfEqualAction=!execute [!RainmeterHideMeter MeterDriveWritesOn][!RainmeterShowMeter MeterDriveWritesOff]
    IfEqualValue=0
