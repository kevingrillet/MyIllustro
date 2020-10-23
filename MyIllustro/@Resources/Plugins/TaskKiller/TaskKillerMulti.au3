#NoTrayIcon
#AutoIt3Wrapper_UseUpx=n
#include <File.au3>

;__Vars
Local $hFile
Local $bVerbose = False

;__Main
If ($CmdLine[0] > 0) Then
	_GetFlags()
	If $bVerbose Then FileOpen(@ScriptDir & "\verbose.log", 1)
	If $bVerbose Then _Log("DEBUG START")
	_GetProcess()
	If $bVerbose Then _Log("DEBUG END")
	If $bVerbose Then FileClose($hFile)
EndIf

Exit

;__Funcs
Func _GetFlags()
	For $nth = 1 To $CmdLine[0] Step +1
		If $CmdLine[$nth] = '-v' Then
			$bVerbose = True
		EndIf
	Next
EndFunc   ;==>_GetFlags

Func _GetProcess()
	For $nth = 0 To $CmdLine[0] Step +1
		If $CmdLine[$nth] = '-v' Then
		Else
			If $bVerbose Then _Log("INFO  Process found: " & $CmdLine[$nth])
			_KillProcess($CmdLine[$nth])
		EndIf
	Next
EndFunc   ;==>_GetProcess

Func _KillProcess($process)
	While ProcessExists($process)
		ProcessClose($process)
		If $bVerbose Then _Log("INFO  Process kill: " & $process)
	WEnd
EndFunc   ;==>_KillProcess

Func _Log($toLog)
	_FileWriteLog($hFile, @YEAR & "/" & @MON & "/" & @MDAY & "_" & @HOUR & ":" & @MIN & "." & @SEC & " - " & $toLog)
EndFunc   ;==>_Log
