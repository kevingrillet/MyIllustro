;@includeLayoutsTop3=#@#Includes\System\Layouts\Top3.inc

[IncludesModules]
@includeModuleTop3=#@#Includes\System\Modules\Top3.inc

;___Top3___
    [MeterTopName3]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName3
    X=#xText#
    Y=#yTop3#

    [MeterTopCPU3]
    Meter=String
    MeasureName=TopCPU3
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yTop3#
    NumOfDecimals=2
    Text=%1%

    [MeterTopMem3]
    Meter=String
    MeasureName=TopMem3
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yTop3#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
