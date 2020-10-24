;@includeLayoutsRAMTop1=#@#Includes\System\Layouts\RAM.Top1.inc

[IncludesModules]
@includeModuleRAMTop1=#@#Includes\System\Modules\RAM.Top1.inc

;___Top1___
    [MeterRAMTopName1]
    Meter=String
    MeterStyle=styleLeftText
	FontColor=#colorOn#
    StringCase=Proper
    MeasureName=TopName1
    X=#xText#
    Y=#yCPUTop1#

    [MeterRAMTopCPU1]
    Meter=String
    MeasureName=TopCPU1
    MeterStyle=styleRightText
	FontColor=#colorOn#
    StringCase=Proper
    X=(#xText#+150)
    Y=#yCPUTop1#
    NumOfDecimals=2
    Text=%1%

    [MeterRAMTopMem1]
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
