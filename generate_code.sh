#!/bin/sh

${UNREAL_HOME}/Engine/Binaries/Win64/UE4Editor.exe \
    ${PWD}/"workers\unreal\InteropCodeGenerator\InteropCodeGenerator.uproject" -run=GenerateInteropCode
