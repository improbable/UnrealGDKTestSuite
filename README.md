# SpatialGDK sample game: Unreal project demonstrating SpatialOS integration

-- Wanqi's playground

Goal: understand Unreal's network flow and the developer experience working with Spatial.
See https://docs.google.com/document/d/1mcC3e2qNEbiA2DRw11QDyvh9SqPnk1DlZ-a03CmVEoY

C to spawn cube
E to pickup (see focus on green laser) (inconsistent)
right click to zoom


Known issues:
- picked up cube is jittery -- the position of the cube is updated every tick to match the player, creating jittery movement
- picking up is bad -- recognizing and updating CurrentItem is inconsistent



--------

* Repository: [github.com/improbable/unreal-gdk-sample-game](https://github.com/improbable/unreal-gdk-sample-game)
* By: [improbable.io](https://improbable.io/)
* License: Use of the contents of this repository is subject to the [Improbable license](LICENSE.md). <br/>
(TODO: Check the license: [JIRA ticket DEV-2087](https://improbableio.atlassian.net/browse/DEV-2087))

Use the SpatialOS Unreal GDK Sample Game to explore how Unreal projects integrate with [SpatialOS](https://improbable.io/games) local deployment. Use the Unreal GDK Sample Game with the [SpatialOS unreal GDK](https://github.com/improbable/unreal-gdk/blob/master).

(TODO: For all links - fix repo link to Unreal GDK for external users - [JIRA TICKET](https://improbableio.atlassian.net/browse/UNR-304))

**Notes**:
* We support this project on Windows version 10. We haven’t tested it on Windows version 7.
* These instructions are for a local deployment only.

**Documentation** <br/>
For guidance on SpatialOS concepts see the documentation on the [SpatialOS website](https://docs.improbable.io/reference/13.0/shared/concepts/spatialos). <br/>
For guidance on using the SpatialOS Unity GDK, see the documentation in the  [SpatialOS Unreal GDK GitHub repository](https://github.com/improbable/unreal-gdk/blob/master/docs/start_here_table_of_contents.md).

**Prerequisites** <br/>
See the [Getting started](https://github.com/improbable/unreal-gdk/blob/master/docs/getting_started.md#prerequisites) documentation on the SpatialOS Unity GDK GitHub repository.

**Installation and setup** <br/>
See the [Getting started](https://github.com/improbable/unreal-gdk/blob/master/docs/getting_started.md#table-of-contents) documentation on the SpatialOS Unity GDK GitHub repository.

**Contributions** <br/>
(TODO: Contributions guidance [JIRA ticket DEV-2087](https://improbableio.atlassian.net/browse/DEV-2087))

**Support** <br/>
(TODO: Support guidance [JIRA ticket DEV-2087](https://improbableio.atlassian.net/browse/DEV-2087))

## Helper Scripts
#### `Game\Scripts\Codegen.bat`
(No parameters)

Generates code from the project schema.

#### `Game\Scripts\BuildWorkerConfig.bat`
(No parameters)

Generates launch configurations for the runtime.

Run this if you change:
* `spatialos.UnrealClient.worker.json`
* `spatialos.UnrealWorker.worker.json`

#### `Game\Scripts\Build.bat`
Parameters:

`<target> <platform> <configuration> SampleGame.uproject [--skip-codegen]`

For example:

`Game\Scripts\Build.bat SampleGameEditor Win64 Development SampleGame.uproject`

Build, cook and zip special workers for use with:
* `spatial upload`
* `spatial local launch`

The following `<target>`s  generate zipped workers:
* `SampleGameEditor`
* `SampleGame`
* `SampleGameServer`

> Any other `<target>` passes all arguments  to `Engine\Build\BatchFiles\Build.bat` - either no cooking or zipping performed.


