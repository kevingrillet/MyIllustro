[IncludesModules]
@includeModuleRAMTop=#@#Includes\System\Modules\RAM.Top.inc

[IncludesLayouts]
@includeLayoutRAMTop1=#@#Includes\System\Layouts\RAM.Top1.inc
;@includeLayoutRAMTop2=#@#Includes\System\Layouts\RAM.Top2.inc
;@includeLayoutRAMTop3=#@#Includes\System\Layouts\RAM.Top3.inc
;@includeLayoutRAMTop4=#@#Includes\System\Layouts\RAM.Top4.inc
;@includeLayoutRAMTop5=#@#Includes\System\Layouts\RAM.Top5.inc

[Variables]
yRAMTop=(#yOffsetLine#*2)
yRAMTop1=(#yOffsetLine#*3)
yRAMTop2=(#yOffsetLine#*4)
yRAMTop3=(#yOffsetLine#*5)
yRAMTop4=(#yOffsetLine#*6)
yRAMTop5=(#yOffsetLine#*7)


[MeterNameTitle]
Meter=String
MeterStyle=styleLeftText
StringStyle=Bold
X=#xText#
Y=#yRAMTop#
Text=Process

[MeterRAMTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+150)
Y=#yRAMTop#
Text=RAM%

[MeterMemTitle]
Meter=String
MeterStyle=styleRightText
StringStyle=Bold
X=(#xText#+200)
Y=#yRAMTop#
Text=MEM

[MeterSSMSSeperator]
Meter=Image
MeterStyle=styleSeperator
X=#xImage#
Y=(#yRAMTop#+#yOffsetSeparator#)
W=(#wProcess#+50)
H=#hSeparator#