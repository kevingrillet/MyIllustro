;@includeModuleRecycleBinToogle=#@#Includes\System\Modules\RecycleBin.Toogle.inc

[IncludesModules]
@includeModuleRecycleBinCount=#@#Includes\System\Modules\RecycleBin.Count.inc

;___RECYCLEBIN___
	[measureToggleSSMS]
	Measure=Calc
	IfCondition=measureRecycleBinCount > 0
	IfTrueAction=!execute [!RainmeterHideMeter meterImageRecycleBinEmpty][!RainmeterShowMeter meterImageRecycleBinFull][!RainmeterRedraw]
	IfFalseAction=!execute [!RainmeterHideMeter meterImageRecycleBinFull][!RainmeterShowMeter meterImageRecycleBinEmpty][!RainmeterRedraw]
