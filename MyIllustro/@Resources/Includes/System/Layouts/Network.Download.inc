;@includeLayoutNetworkDownload=#@#Includes\System\Layout\Network.Download.inc

[IncludesModules]
@includeModuleNetworkDownload=#@#Includes\System\Modules\Network.Download.inc

;___NETWORKDOWNLOAD___
    [meterDownloadLabel]
    Meter=String
    MeterStyle=styleLeftText
    X=#xLabel#
    Y=#yDownload#
    W=#wProcess#
    H=#hText#
    Text=Download

    [meterDownloadValue]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureNetIn
	X=#xProcess#
    Y=#yDownload#
	W=#wProcess#
	H=#hText#
    Text=%1B/s
    NumOfDecimals=1
    AutoScale=1

    [meterDownloadBar]
    Meter=Bar
    MeterStyle=styleBar
    MeasureName=measureNetIn
	X=#xBar#
	Y=(#yDownload#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
