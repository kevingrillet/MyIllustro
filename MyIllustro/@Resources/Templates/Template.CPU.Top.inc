[IncludesModules]
@includeModuleTop=#@#Includes\System\Modules\Top.inc

[IncludesLayouts]
@includeLayoutTop1=#@#Includes\System\Layouts\Top1.inc
;@includeLayoutTop2=#@#Includes\System\Layouts\Top2.inc
;@includeLayoutTop3=#@#Includes\System\Layouts\Top3.inc
;@includeLayoutTop4=#@#Includes\System\Layouts\Top4.inc
;@includeLayoutTop5=#@#Includes\System\Layouts\Top5.inc

[Variables]
yTop=(#yOffsetLine#*2)
yTop1=(#yOffsetLine#*3)
yTop2=(#yOffsetLine#*4)
yTop3=(#yOffsetLine#*5)
yTop4=(#yOffsetLine#*6)
yTop5=(#yOffsetLine#*7)


[MeterNameTitle]
Meter=String
MeterStyle=styleLeftText
StringStyle=Bold
X=#xText#
Y=#yTop#
Text=Process

[MeterCPUTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+150)
Y=#yTop#
Text=CPU%

[MeterMemTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+200)
Y=#yTop#
Text=MEM

[MeterSSMSSeperator]
Meter=Image
MeterStyle=styleSeperator
X=#xImage#
Y=(#yTop#+#yOffsetSeparator#)
W=(#wProcess#+50)
H=#hSeparator#