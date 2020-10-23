;@includeLayoutsTop1=#@#Includes\System\Layouts\Top1.inc

[IncludesModules]
@includeModuleTop1=#@#Includes\System\Modules\Top1.inc

;___Top1___
    [MeterTopName1]
    Meter=String
    MeterStyle=styleLeftText
	FontColor=#colorOn#
    StringCase=Proper
    MeasureName=TopName1
    X=#xText#
    Y=#yTop1#

    [MeterTopCPU1]
    Meter=String
    MeasureName=TopCPU1
    MeterStyle=styleRightText
	FontColor=#colorOn#
    StringCase=Proper
    X=(#xText#+150)
    Y=#yTop1#
    NumOfDecimals=2
    Text=%1%

    [MeterTopMem1]
    Meter=String
    MeasureName=TopMem1
    MeterStyle=styleRightText
	FontColor=#colorOn#
    StringCase=Proper
    X=(#xText#+200)
    Y=#yTop1#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
