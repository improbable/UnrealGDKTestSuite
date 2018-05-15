#!/bin/sh

"${UNREAL_HOME}/Engine/Binaries/Win64/UE4Editor.exe" \
	"${PWD}/workers\unreal\Game\SampleGame.uproject" ThirdPersonExampleMap -server -log -workerType UnrealWorker -stdout -nowrite -unattended -nologtimes -nopause -noin -messaging -SaveToUserDir -NoVerifyGC -windowed -resX=400 -resY=300
