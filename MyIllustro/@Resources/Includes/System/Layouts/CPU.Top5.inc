;@includeLayoutsCPUTop5=#@#Includes\System\Layouts\CPU.Top5.inc

[IncludesModules]
@includeModuleCPUTop5=#@#Includes\System\Modules\CPU.Top5.inc

;___Top5___
    [MeterCPUTopName5]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName5
    X=#xText#
    Y=#yCPUTop5#

    [MeterCPUTopCPU5]
    Meter=String
    MeasureName=TopCPU5
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop5#
    NumOfDecimals=2
    Text=%1%

    [MeterCPUTopMem5]
    Meter=String
    MeasureName=TopMem5
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yCPUTop5#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
