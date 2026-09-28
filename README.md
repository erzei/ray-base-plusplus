# ray-base-plusplus

Custom project template for C++ projects with [raylib](https://github.com/raysan5/raylib.git) &amp; [robloach's C++ wrapper](https://github.com/RobLoach/raylib-cpp.git), with the aim to have a easy to use, out of the box CMake configuration for the quickest bootstrap

This project uses Cmake along with Ninja to fetch, link and build the necessary files and dependencies to generate the project binary, ready for quick development and prototyping.

No special flags, no optimization techniques or other fancy stuff. If the user wishes to extend and configure them, the current setup tries to be as minimal as possible to allow for custom flexibility.

## Features
- raylib 6.0
- raylib-cpp 6.0.3
- C++ target: 23

## Why

Since I want to experiment and learn without having to repeat myself every time, and since I haven't found a project template that satisfies my current setup needs, I created this template for easy clone, setup &amp; go

Not intended to be an end-all for every single project out there, but if someone finds this useful leave a message/star :)

Feel free to report issues, send improvements and suggestions. Not guaranteeing to reply immediately, but I'll try my best to help

## How to run

Currently tested on:
- Windows 11
- Debian 13

### Windows

#### Dependencies

- Cmake [link](https://cmake.org/cmake/download)
- Ninja build system [link](https://github.com/ninja-build/ninja/releases)
- Visual C++ Redistributable [link](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170)

### Linux

#### Dependencies

- Cmake
- Ninja build system
- OpenGL & X11 libraries(to build and run without extra flags)

**Debian**
- `sudo apt install build-essential gdb cmake ninja-build`
- `sudo apt install libx11-dev libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev`

## How to build

1. Clone the project
`git clone https://github.com/erzei/ray-base-plusplus.git <PROJECT_NAME|.>`
2. In `CMakeLists.txt` change the project name(optional)
```
project(ray-base++ <- PROJECT_NAME, change this to your liking
  VERSION 0.0.1
  LANGUAGES C CXX
)
```
3. Inside your project root folder, run:
`cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug`
4. Then, run the following command:
`cmake --build build`
5. The binary executable will be localed inside the `build` directory

## TODO

- Improve readme
- ~~Current workflow has been tested only in windows.~~ Pending integration &amp; testing on MacOS
- Add build options to generate and expose compilation files(maybe by default?)
- Add C++ linting and styling
- Quicker bootstrapping
- Other things I'm not considering right now


## License

This project(ray-base-plusplus) uses zlib license. See [LICENSE](LICENSE)
