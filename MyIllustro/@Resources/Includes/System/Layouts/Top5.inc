;@includeLayoutsTop5=#@#Includes\System\Layouts\Top5.inc

[IncludesModules]
@includeModuleTop5=#@#Includes\System\Modules\Top5.inc

;___Top5___
    [MeterTopName5]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName5
    X=#xText#
    Y=#yTop5#

    [MeterTopCPU5]
    Meter=String
    MeasureName=TopCPU5
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yTop5#
    NumOfDecimals=2
    Text=%1%

    [MeterTopMem5]
    Meter=String
    MeasureName=TopMem5
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yTop5#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
