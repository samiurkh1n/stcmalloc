# stcmalloc, Samiur's thread caching malloc. 

My own reimplementation of TCMalloc (thread caching malloc). This is a toy/fun project please don't use this for things that matter.

Tested on Windows and Linux. Does not support Apple devices.

Dependencies:
* CMake
* C compiler (project using MSVC and Clang compilers)
* git
* Google Test (submodule of repo)
* Benchmark (submodule of repo)

### Usage and Documentation

If you want to use this, you probably want to include this project as a submodule in your project
```bash
$ git submodule add https://github.com/samiurkh1n/stcmalloc extern/stcmalloc
```
then add the directory in your CMake file
```cmake
add_subdirectory("${PROJECT_SOURCE_DIR}/extern/stcmalloc" "extern/stcmalloc")
```

TODO(samiurkh1n): Add installation instructions for the poor soul that really wants to use this.

To learn how to use the library, read [stcmalloc.h](./include/stcmalloc/stcmalloc.h)

### Development

#### Building

Like every CMake project:

```bash
$ mkdir build
$ cd build
$ cmake ..
# make or open solution file and build
```

#### Testing

Make sure you update git submodules.

```bash
$ git submodule update --init --recursive
```