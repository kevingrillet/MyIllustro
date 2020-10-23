;@includeLayoutNetworkUpload=#@#Includes\System\Layout\Network.Upload.inc

[IncludesModules]
@includeModuleNetworkUpload=#@#Includes\System\Modules\Network.Upload.inc

;___NETWORKUPLOAD___
    [meterUploadLabel]
    Meter=String
    MeterStyle=styleLeftText
    X=#xLabel#
    Y=#yUpload#
    W=#wProcess#
    H=#hText#
    Text=Upload

    [meterUploadValue]
    Meter=String
    MeterStyle=styleRightText
    MeasureName=measureNetOut
	X=#xProcess#
    Y=#yUpload#
	W=#wProcess#
	H=#hText#
    Text=%1B/s
    NumOfDecimals=1
    AutoScale=1

    [meterUploadBar]
    Meter=Bar
    MeterStyle=styleBar
    MeasureName=measureNetOut
	X=#xBar#
	Y=(#yUpload#+#yOffsetBar#)
	W=#wBar#
	H=#hBar#
