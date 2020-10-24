;@includeLayoutsCPUTop1=#@#Includes\System\Layouts\CPU.Top1.inc

[IncludesModules]
@includeModuleCPUTop1=#@#Includes\System\Modules\CPU.Top1.inc

;___Top1___
    [MeterCPUTopName1]
    Meter=String
    MeterStyle=styleLeftText
	FontColor=#colorOn#
    StringCase=Proper
    MeasureName=TopName1
    X=#xText#
    Y=#yCPUTop1#

    [MeterCPUTopCPU1]
    Meter=String
    MeasureName=TopCPU1
    MeterStyle=styleRightText
	FontColor=#colorOn#
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop1#
    NumOfDecimals=2
    Text=%1%

    [MeterCPUTopMem1]
    Meter=String
    MeasureName=TopMem1
    MeterStyle=styleRightText
	FontColor=#colorOn#
    StringCase=Proper
    X=(#xText#+200)
    Y=#yCPUTop1#
    NumOfDecimals=1
    AutoScale=1
    Text=%1B
