;@includeModuleTop=#@#Includes\System\Modules\Top.inc

;___TOP___
    [Variables]
    Filter="_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System"

    [TopCPU]
    Measure=Plugin
    Plugin=Plugins\NomFerp.dll
    Order=% Processor Time
    Mode=Difference
    Filter=#Filter#
    UpdateDivider=2