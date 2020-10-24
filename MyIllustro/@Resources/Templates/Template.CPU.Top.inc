[IncludesModules]
@includeModuleCPUTop=#@#Includes\System\Modules\CPU.Top.inc

[IncludesLayouts]
@includeLayoutCPUTop1=#@#Includes\System\Layouts\CPU.Top1.inc
;@includeLayoutCPUTop2=#@#Includes\System\Layouts\CPU.Top2.inc
;@includeLayoutCPUTop3=#@#Includes\System\Layouts\CPU.Top3.inc
;@includeLayoutCPUTop4=#@#Includes\System\Layouts\CPU.Top4.inc
;@includeLayoutCPUTop5=#@#Includes\System\Layouts\CPU.Top5.inc

[Variables]
yCPUTop=(#yOffsetLine#*2)
yCPUTop1=(#yOffsetLine#*3)
yCPUTop2=(#yOffsetLine#*4)
yCPUTop3=(#yOffsetLine#*5)
yCPUTop4=(#yOffsetLine#*6)
yCPUTop5=(#yOffsetLine#*7)


[MeterNameTitle]
Meter=String
MeterStyle=styleLeftText
StringStyle=Bold
X=#xText#
Y=#yCPUTop#
Text=Process

[MeterCPUTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+150)
Y=#yCPUTop#
Text=CPU%

[MeterMemTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+200)
Y=#yCPUTop#
Text=MEM

[MeterSSMSSeperator]
Meter=Image
MeterStyle=styleSeperator
X=#xImage#
Y=(#yCPUTop#+#yOffsetSeparator#)
W=(#wProcess#+50)
H=#hSeparator#