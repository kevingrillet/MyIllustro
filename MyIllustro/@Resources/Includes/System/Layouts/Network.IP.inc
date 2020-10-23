;@includeLayoutNetworkIP=#@#Includes\System\Layout\Network.IP.inc

[IncludesModules]
@includeModuleNetworkIP=#@#Includes\System\Modules\Network.IP.inc

;___IP___
    [meterIPLabel]
    Meter=String
    MeterStyle=styleLeftText
    X=#xLabel#
    Y=#yIP#
    W=#wProcess#
    H=#hText#
    Text=IP

    [meterIPValue]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureIP
	X=#xProcess#
	Y=#yIP#
	W=#wProcess#
	H=#hText#
    Text=%1
