@rem newInclude.bat
@echo off

if [%~1]==[] goto usage
if [%~2]==[] goto usage
SET mybatpath=%~dp0
echo %mybatpath%

for %%I in ("%mybatpath%\..\..") do set "mypath=%%~fI"
SET mypath=%mypath%\Includes\

robocopy /MIR "%mypath:~0,-1%\.example"  "%mypath:~0,-1%\%~1" /W:0 /R:0

ren "%mypath:~0,-1%\%~1\Layouts\.example.full.inc" "%~1.full.inc"
ren "%mypath:~0,-1%\%~1\Layouts\.example.std.inc" "%~1.std.inc"
ren "%mypath:~0,-1%\%~1\Layouts\.example.min.inc" "%~1.min.inc"
ren "%mypath:~0,-1%\%~1\Modules\.example.inc" "%~1.inc"

powershell -Command "(gc \"%mypath:~0,-1%\%~1\Layouts\%~1.full.inc\") -replace '\.example', '%~1' | Out-File -encoding ASCII \"%mypath:~0,-1%\%~1\Layouts\%~1.full.inc\""
powershell -Command "(gc \"%mypath:~0,-1%\%~1\Layouts\%~1.std.inc\") -replace '\.example', '%~1' | Out-File -encoding ASCII \"%mypath:~0,-1%\%~1\Layouts\%~1.std.inc\""
powershell -Command "(gc \"%mypath:~0,-1%\%~1\Layouts\%~1.min.inc\") -replace '\.example', '%~1' | Out-File -encoding ASCII \"%mypath:~0,-1%\%~1\Layouts\%~1.min.inc\""
powershell -Command "(gc \"%mypath:~0,-1%\%~1\Modules\%~1.inc\") -replace '\.example', '%~1' | Out-File -encoding ASCII \"%mypath:~0,-1%\%~1\Modules\%~1.inc\""
powershell -Command "(gc \"%mypath:~0,-1%\%~1\Modules\%~1.inc\") -replace '\.exeexample', '%~2' | Out-File -encoding ASCII \"%mypath:~0,-1%\%~1\Modules\%~1.inc\""

echo Done
goto :eof

:usage
@echo Usage: %~0 ^<NewIncludeName^> ^<NewIncludeProcessName^>
exit /B 1
