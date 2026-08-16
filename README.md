# ray-base-plusplus
Custom project template for C++ projects with [raylib](https://github.com/raysan5/raylib.git) &amp; [robloach's C++ wrapper](https://github.com/RobLoach/raylib-cpp.git), with the aim to have a easy to use template and out of the box CMake configuration for quickest bootstrap

This project uses Cmake along with Ninja to fetch, link and build the necessary files and dependencies to generate the project binary

## Why

Since I want to experiment and learn without having to repeat myself every time, and since I haven't found a project template that satisfies my current setup needs, I created this template for easy clone, setup &amp; go

Not intended to be a end-all for every single project out there, but if someone finds this useful leave a message/star :)

Feel free to report issues, send improvements and suggestions. Not guaranteeing to respond immediately, but I'll try my best to help

## How to run

### Windows
Currently tested on Windows 11

#### Dependencies
- Cmake [link](https://cmake.org/cmake/download)
- Ninja build system [link](https://github.com/ninja-build/ninja/releases)
- Visual C++ Redistributable [link](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170)

#### How to build
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
5. The binary executable will be localed inside the `build` directory(`ray-base++.exe` in this example)



## TODO
- Improve readme
- Current workflow has been tested only in windows. Pending testing and fixing on Linux & MacOS
- Add build options to generate and expose compilation files
- Add C++ linting and styling
- Quicker bootstrapping
- Polish and improve distributable binaries generation
- Other things I'm not considering right now


## License

This project(ray-base-plusplus) uses zlib license. See [LICENSE](LICENSE)
