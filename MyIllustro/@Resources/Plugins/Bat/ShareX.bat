@echo off

::SET ShareXFolder="$env:UserProfile\Documents\ShareX\Screenshots"
::SET ShareXFolder=%UserProfile%\Documents\ShareX\Screenshots
SET ShareXFolder="%UserProfile%\OneDrive - YMAG\Documents\ShareX\Screenshots"
SET mypath=%~dp0
FOR /F " tokens=*" %%i IN ('dir %ShareXFolder% /b /ad-h /od') DO (SET folder=%%i)
FOR /F " tokens=*" %%i IN ('dir %ShareXFolder%\%folder% /b /od') DO (SET file=%%i)
copy %ShareXFolder%\%folder%\%file%  "%mypath:~0,-1%"\ShareX.png
