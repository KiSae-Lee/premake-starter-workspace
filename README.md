# Premake Starter Project

## Pre-quests
### build your premake:
For Windows:
1. Open `Developer PowerShell for VS 2022`.
2. `cd` to `external/premake-core`.
3. Run `nmake -f bootstrap.mak windows`.
4. You can find `premake5.exe` in `external/premake-core/bin/release`.

For Linux:
1. Need to Update.

For MaxOS:
1. Need to Update.

### build your external libraries:
#### spdlog:
For Windows:
1. `cd` to `library/external/spdlog`.
2. Make sure you are already installed CMake.
3. Use `cmake CMakeLists.txt -B Build -G "Visual Studio 17 2022" -A x64` command to generate Visual Studio projects and solution file.
4. Open `spdlog.sln` in `build` folder.
5. Set `Release` mode in solution configuration.
6. Right click on `spdlog` project and click `build`.
7. You can find `spdlog.lib` in `library/external/spdlog/Build/Release`.

For Linux:
1. Need to Update.

For MaxOS:
1. Need to Update.

### Project Build:
For Windows:
1. Double click to run `scripts/windows/buildproject.bat` for Windows.
2. Or, use `./scripts/windows/buildproject` command to run the bat file.
3. You can find Visual Studio projects and solution file in `build` folder.
4. Open the `.sln` file.
5. Build and run your solution.

For Linux:
1. Need to Update.

For MaxOS:
1. Need to Update.

### 