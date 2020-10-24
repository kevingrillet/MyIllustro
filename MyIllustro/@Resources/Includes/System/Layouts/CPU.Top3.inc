;@includeLayoutsCPUTop3=#@#Includes\System\Layouts\CPU.Top3.inc

[IncludesModules]
@includeModuleCPUTop3=#@#Includes\System\Modules\CPU.Top3.inc

;___Top3___
    [MeterCPUTopName3]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName3
    X=#xText#
    Y=#yCPUTop3#

    [MeterCPUTopCPU3]
    Meter=String
    MeasureName=TopCPU3
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop3#
    NumOfDecimals=2
    Text=%1%

    [MeterCPUTopMem3]
    Meter=String
    MeasureName=TopMem3
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yCPUTop3#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
