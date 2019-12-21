:build
ECHO Build Premake
CD vendor/premake-core
 IF EXIST bin\release\premake5.exe (ECHO Premake is already built) ELSE (nmake -f Bootstrap.mak windows)
CD ..\..
ECHO Build Project Files
CALL vendor\premake-core\bin\release\premake5.exe %1
ECHO Done
EXIT /B 0