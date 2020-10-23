;@includeLayoutRecycleBinCount=#@#Includes\System\Layouts\RecycleBin.Count.inc

[IncludesModules]
@includeModuleRecycleBinCount=#@#Includes\System\Modules\RecycleBin.Count.inc

;___TO USE
; yRecycleBinCount=(#yOffsetLine#*2)

;___RECYCLEBINCOUNT___
	[meterRecycleBinCountLabel]
	Meter=String
	MeterStyle=styleLeftText
	X=#xLabel#
	Y=#yRecycleBinCount#
	W=#wProcess#
	H=#hText#
	Text="Nombre :"

	[meterRecycleBinCountValue]
	Meter=String
	MeasureName=measureRecycleBinCount
	MeterStyle=styleRightText
	X=#xProcess#
	Y=#yRecycleBinCount#
	W=#wProcess#
	H=#hText#
	Text="%1"