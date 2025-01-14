#!/usr/bin/env bash

set -e -u -x -o pipefail

cd "$(dirname "$0")/../"

source ci/profiling.sh

markStartOfBlock "$0"

source ci/prepare_build_environment.sh

markStartOfBlock "Build the TestSuite (Windows)"
  # Build each target to ensure scripts are correct, skipping code generation on all but the first to save some time.
  Game/Plugins/UnrealGDK/SpatialGDK/Build/Scripts/BuildWorker.bat "TestSuiteEditor" "Win64" "Development" "TestSuite.uproject"
  if [[ ! -f "spatial/build/assembly/worker/UnrealEditor@Windows.zip" ]]; then
    echo "Editor was not properly built."
    exit 1
  fi

  Game/Plugins/UnrealGDK/SpatialGDK/Build/Scripts/BuildWorker.bat "TestSuite" "Win64" "Development" "TestSuite.uproject" --skip-codegen
  if [[ ! -f "spatial/build/assembly/worker/UnrealClient@Windows.zip" ]]; then
     echo "Client was not properly built."
     exit 1
  fi
markEndOfBlock "Build the TestSuite (Windows)"

markEndOfBlock "$0"
