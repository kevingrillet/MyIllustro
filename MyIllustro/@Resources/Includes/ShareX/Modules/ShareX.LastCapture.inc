;@includeModuleShareXLastCapture=#@#Includes\ShareX\Modules\ShareX.LastCapture.inc

;___TO USE
;ShareXFolder="%USERPROFILE%\Documents\ShareX\Screenshots\"

;___Analyse du repertoire___
;Ancien concept @Ressources/PLugins/Bat/ShareX.bat
    [MeasureShareXFolder]
    Measure=Plugin
    Plugin=FileView
    Path=#ShareXFolder#
    Count=1
    Extensions="png"
    Recursive=2
    ShowFolder=1
    ShowFile=0
    SortAscending=0
    SortDateType=Created
    SortType=Date
    UpdateDivider=60
    OnUpdateAction=!CommandMeasure MeasureShareXFolder Update

    [MeasureShareXFolderChildPath]
    Measure=Plugin
    Plugin=FileView
    Path=[MeasureShareXFolder]
    Type=FilePath
    Index=1
    Group=Children
