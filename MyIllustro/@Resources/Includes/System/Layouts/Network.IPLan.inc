;@includeLayoutNetworkIPLan=#@#Includes\System\Layout\Network.IPLan.inc

[IncludesModules]
@includeModuleNetworkIPLan=#@#Includes\System\Modules\Network.IPLan.inc

;___IPLAN___
    [meterIPLanLabel]
    Meter=String
    MeterStyle=styleLeftText
    X=#xLabel#
    Y=#yIPLan#
    W=#wProcess#
    H=#hText#
    Text=IP Lan

    [meterIPLanValue]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureIPLan
	X=#xProcess#
	Y=#yIPLan#
	W=#wProcess#
	H=#hText#
    Text=%1
