;@includeLayoutShareXCapture=#@#Includes\ShareX\Layouts\ShareX.Capture.inc

[IncludesModules]
@includeModuleShareXLastCapture=#@#Includes\ShareX\Modules\ShareX.LastCapture.inc

;___TO USE
; yShareXCapture=(#yOffsetLine#*2)

;___SHAREXCAPTURE___
	[MeterShareXImage]
	Meter=Image
	MeasureName=MeasureShareXFolderChildPath
	ImageName=%1
	DynamicVariables=1
	PreserveAspectRatio=1
	X=#xImage#
	Y=#yShareXCapture#
	W=195
	H=(205/16*9)
	LeftMouseUpAction=[explorer.exe /select,[MeasureShareXFolderChildPath]]
	RightMouseUpAction=["#@#Plugins\AddImageToClipboard.exe" "[MeasureShareXFolderChildPath]"]
	ToolTipTitle=#ShareX#
	ToolTipType=1
	ToolTipIcon=INFO
	ToolTipText=Clic gauche: Ouvrir le repertoire de la capture#CRLF#Clic droit: Ajouter la capture au presse papier