;@includeModuleUpTime=#@#Includes\System\Modules\UpTime.inc

;___UPTIME___
	[measureSystemCurrent]
	Measure=Time

	[measureSystemUserLoginTime]
	Measure=Plugin
	Plugin=SysInfo
	SysInfoType=USER_LOGONTIME
	UpdateDivider=-1

	[measureSystemFormatSeconds]
	Measure=UpTime
	SecondsValue=([measureSystemCurrent:] - [measureSystemUserLoginTime:])
	Format="%4!i!d %3!i!h %2!i!m"
	DynamicVariables=1
