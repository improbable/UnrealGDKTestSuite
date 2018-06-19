@ECHO OFF

set SPATIALGDK_PLUGINSPATH="%~dp0\Game\Plugins\SpatialGDK"
set SPATIALGDK_MODULEPATH="%~dp0\Game\Source\SpatialGDK"
set SPATIALGDK_SCRIPTSPATH="%~dp0\Game\Scripts"
set SPATIALGDK_BINARIESPATH="%~dp0\Game\Binaries\ThirdParty\Improbable"
set SPATIALGDK_SCHEMAPATH="%~dp0\schema\improbable\unreal\gdk"

<<<<<<< HEAD
=======
REM First section is for cleaning known UnrealGDK symlinks and running git clean.
set /p NUKE=Would you like to clean all symlinks, uncommited changes and all built files (git clean -xdf)?[Y/N]: 
IF /I %NUKE% == Y (
    CALL :clean_all_symlinks
    CALL :git_clean_xdf
    GOTO :build_symlinks
)
EXIT /B 0

REM Second section is for rebuilding these symlinks.
:build_symlinks
set /p BUILDBRIDGES=Would you like to remake symlinks to your Unreal GDK?[Y/N]: 
IF /I %BUILDBRIDGES% == Y (
    set /p GDKPATH=Please provide the path to your Unreal GDK: 
    CALL :make_symlinks
)
EXIT /B 0

REM Helper methods are below.
:make_symlinks
Call create_gdk_symlink.bat %GDKPATH% 
EXIT /B 0

:clean_all_symlinks
>>>>>>> b4ee42d... Removed type-bindings
ECHO Cleaning old symlinks
CALL :clean_path %SPATIALGDK_PLUGINSPATH%
CALL :clean_path %SPATIALGDK_MODULEPATH%
CALL :clean_path %SPATIALGDK_SCRIPTSPATH%
CALL :clean_path %SPATIALGDK_BINARIESPATH%
CALL :clean_path %SPATIALGDK_SCHEMAPATH%
ECHO Finished cleaning up old symlinks

ECHO Performing git clean
git clean -xdf
ECHO Finished git clean

EXIT /B 0

:clean_path
IF EXIST "%~1" (
    rmdir /s /q "%~1"
    echo The symlink "%~1" removed
) ELSE (
    echo "%~1" did not exist when performing the clean
)
