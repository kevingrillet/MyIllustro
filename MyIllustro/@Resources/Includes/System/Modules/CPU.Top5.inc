;@includeModuleCPUTop5=#@#Includes\System\Modules\CPU.Top5.inc

;___Top5___
    [TopName5]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=name
    Instance=5
    RegExpSubstitute=1
    Substitute="(?siU)(.*)#.*$":"\1"

    [TopCPU5]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=% Processor Time
    Mode=DifferenceTotalPercent
    Instance=5

    [TopMem5]
    Measure=Plugin
    Plugin=NomFerp.dll
    ParentName=TopCPU
    Counter=Working Set - Private
    Mode=Normal
    Instance=5
