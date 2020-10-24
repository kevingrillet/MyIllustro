;@includeLayoutsCPUTop4=#@#Includes\System\Layouts\CPU.Top4.inc

[IncludesModules]
@includeModuleCPUTop4=#@#Includes\System\Modules\CPU.Top4.inc

;___Top4___
    [MeterCPUTopName4]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName4
    X=#xText#
    Y=#yCPUTop4#

    [MeterCPUTopCPU4]
    Meter=String
    MeasureName=TopCPU4
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop4#
    NumOfDecimals=2
    Text=%1%

    [MeterCPUTopMem4]
    Meter=String
    MeasureName=TopMem4
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yCPUTop4#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
