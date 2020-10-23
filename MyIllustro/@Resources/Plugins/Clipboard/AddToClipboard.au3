;https://www.autoitscript.com/forum/topic/191946-how-to-copy-a-picture-to-the-clipboard%E3%80%90solved%E3%80%91/?tab=comments#comment-1377147
#NoTrayIcon
#AutoIt3Wrapper_UseUpx=n
#include <Clipboard.au3>
#include <GDIPlus.au3>

If $CmdLine[0] = 1 Then
	$sFilePath = $CmdLine[1]
Else
	Exit
EndIf

If FileExists($sFilePath) Then
	_GDIPlus_Startup()
	$hClipboard_Bitmap = _GDIPlus_BitmapCreateFromFile($sFilePath)
	$hClipboard_BitmapGDI = _GDIPlus_BitmapCreateHBITMAPFromBitmap($hClipboard_Bitmap)
	$hHBmp_Clipboard = _WinAPI_CopyImage($hClipboard_BitmapGDI, 0, 0, 0, BitOR($LR_COPYDELETEORG, $LR_COPYRETURNORG))
	_WinAPI_Bitmap2Clipboard($hHBmp_Clipboard)
	_GDIPlus_Shutdown()
Else
	ClipPut($sFilePath)
EndIf

Func _WinAPI_Bitmap2Clipboard($hHBitmap)
	If Not _ClipBoard_Open(0) Then Return 1
	If Not _ClipBoard_Empty() Then Return 2
	Local Const $hCP = _ClipBoard_SetDataEx($hHBitmap, $CF_BITMAP)
	If Not $hCP Or @error Then Return 3
	_ClipBoard_Close()
	Return 0
EndFunc   ;==>_WinAPI_Bitmap2Clipboard


Exit
