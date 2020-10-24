;@includeModuleCPUTop4=#@#Includes\System\Modules\CPU.Top4.inc

;___Top5___
    [TopName4]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=name
    Instance=4
    RegExpSubstitute=1
    Substitute="(?siU)(.*)#.*$":"\1"

    [TopCPU4]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=% Processor Time
    Mode=DifferenceTotalPercent
    Instance=4

    [TopMem4]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=Working Set - Private
    Mode=Normal
    Instance=4
