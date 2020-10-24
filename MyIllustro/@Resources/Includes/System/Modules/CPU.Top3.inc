;@includeModuleCPUTop3=#@#Includes\System\Modules\CPU.Top3.inc

;___Top5___
    [TopName3]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=name
    Instance=3
    RegExpSubstitute=1
    Substitute="(?siU)(.*)#.*$":"\1"

    [TopCPU3]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=% Processor Time
    Mode=DifferenceTotalPercent
    Instance=3

    [TopMem3]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=Working Set - Private
    Mode=Normal
    Instance=3
