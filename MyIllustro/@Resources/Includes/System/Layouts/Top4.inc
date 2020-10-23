;@includeLayoutsTop4=#@#Includes\System\Layouts\Top4.inc

[IncludesModules]
@includeModuleTop4=#@#Includes\System\Modules\Top4.inc

;___Top4___
    [MeterTopName4]
    Meter=String
    MeterStyle=styleLeftText
    StringCase=Proper
    MeasureName=TopName4
    X=#xText#
    Y=#yTop4#

    [MeterTopCPU4]
    Meter=String
    MeasureName=TopCPU4
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+150)
    Y=#yTop4#
    NumOfDecimals=2
    Text=%1%

    [MeterTopMem4]
    Meter=String
    MeasureName=TopMem4
    MeterStyle=styleRightText
    StringCase=Proper
    X=(#xText#+200)
    Y=#yTop4#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
