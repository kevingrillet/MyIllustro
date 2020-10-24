;@includeLayoutsCPUTop2=#@#Includes\System\Layouts\CPU.Top2.inc

[IncludesModules]
@includeModuleCPUTop2=#@#Includes\System\Modules\CPU.Top2.inc

;___Top2___
    [MeterCPUTopName2]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName2
    X=#xText#
    Y=#yCPUTop2#

    [MeterCPUTopCPU2]
    Meter=String
    MeasureName=TopCPU2
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop2#
    NumOfDecimals=2
    Text=%1%

    [MeterCPUTopMem2]
    Meter=String
    MeasureName=TopMem2
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yCPUTop2#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
