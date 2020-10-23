;@includeModuleTop2=#@#Includes\System\Modules\Top2.inc

;___Top5___
    [TopName2]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=name
    Instance=2
    RegExpSubstitute=1
    Substitute="(?siU)(.*)#.*$":"\1"

    [TopCPU2]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=% Processor Time
    Mode=DifferenceTotalPercent
    Instance=2

    [TopMem2]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=Working Set - Private
    Mode=Normal
    Instance=2
