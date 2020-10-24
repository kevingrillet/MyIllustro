;@includeModuleRAMTop=#@#Includes\System\Modules\RAM.Top.inc

;___TOP___
    [Variables]
    Filter="_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System"

    [TopRAM]
    Measure=Plugin
    Plugin=NomFerp.dll
    Order=% Memory Time
    Mode=Difference
    Filter=#Filter#
    UpdateDivider=2