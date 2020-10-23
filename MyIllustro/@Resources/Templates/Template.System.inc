[IncludesLayouts]
@includeLayoutUpTime=#@#Includes\System\Layouts\UpTime.inc
@includeLayoutCPU=#@#Includes\System\Layouts\CPU.inc
@includeLayoutRAM=#@#Includes\System\Layouts\RAM.inc
@includeLayoutSWAP=#@#Includes\System\Layouts\SWAP.inc
@includeLayoutRecycleBin=#@#Includes\System\Layouts\RecycleBin.inc
@includeLayoutRecycleBinSize=#@#Includes\System\Layouts\RecycleBin.Size.inc
@includeLayoutRecycleBinCount=#@#Includes\System\Layouts\RecycleBin.Count.inc

[Variables]
yUpTime=(#yOffsetLine#*2)
yCPU=(#yOffsetLine#*3)
yRAM=(#yOffsetLine#*4)
ySWAP=(#yOffsetLine#*5)
yRecycleBin=(#yOffsetLine#*6)
yRecycleBinSize=(#yOffsetLine#*7)
yRecycleBinCount=(#yOffsetLine#*8)
