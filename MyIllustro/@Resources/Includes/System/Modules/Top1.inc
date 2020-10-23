;@includeModuleTop1=#@#Includes\System\Modules\Top1.inc

;___Top5___
    [TopName1]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=name
    Instance=1
    RegExpSubstitute=1
    Substitute="(?siU)(.*)#.*$":"\1"

    [TopCPU1]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=% Processor Time
    Mode=DifferenceTotalPercent
    Instance=1

    [TopMem1]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    ParentName=TopCPU
    Counter=Working Set - Private
    Mode=Normal
    Instance=1
