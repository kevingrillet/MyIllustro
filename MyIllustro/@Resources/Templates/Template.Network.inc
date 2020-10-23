[IncludesLayouts]
@includeLayoutIP=#@#Includes\System\Layouts\Network.IP.inc
@includeLayoutIPLan=#@#Includes\System\Layouts\Network.IPLan.inc
@includeLayoutUpload=#@#Includes\System\Layouts\Network.upload.inc
@includeLayoutDownload=#@#Includes\System\Layouts\Network.Download.inc

[Variables]
; Set maxDownload and maxUpload to your maximum download and upload speed in bits.
; To convert kilobits, megabits, kilobytes, and megabytes into bits, go to www.google.com
; and search for something like "10 megabytes in bits".
; Default=10485760
maxDownload=10485760
maxUpload=10485760
yIP=(#yOffsetLine#*2)
yIPLan=(#yOffsetLine#*3)
yUpload=(#yOffsetLine#*4)
yDownload=(#yOffsetLine#*5)
