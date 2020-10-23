;@includeLayoutsTop2=#@#Includes\System\Layouts\Top2.inc

[IncludesModules]
@includeModuleTop2=#@#Includes\System\Modules\Top2.inc

;___Top2___
    [MeterTopName2]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName2
    X=#xText#
    Y=#yTop2#

    [MeterTopCPU2]
    Meter=String
    MeasureName=TopCPU2
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yTop2#
    NumOfDecimals=2
    Text=%1%

    [MeterTopMem2]
    Meter=String
    MeasureName=TopMem2
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yTop2#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
