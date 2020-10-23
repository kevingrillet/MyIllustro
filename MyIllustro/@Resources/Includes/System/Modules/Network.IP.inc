;@includeModuleNetworkIP=#@#Includes\System\Modules\Network.IP.inc

;___IP___
    [measureIP]
    Measure=Plugin
    Plugin=WebParser
    URL=https://checkip.amazonaws.com/
    UpdateRate=14400
    RegExp=(?siU)^(.*)$
    StringIndex=1
    Substitute="":"N/A"
