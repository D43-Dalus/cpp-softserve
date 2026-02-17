# C++ Crash Course Assignments

Assignments proposed by C++ Crash Course.
Executables ignored on purpose (check .gitignore)

## Compiling manually
To compile a file manually, execute on your linux terminal:

```bash
g++ <filename.cpp> -o <executable_filename>
```

## Compiling with CMake
At the root of the project, create a `builder/` folder.
```bash
mkdir build
```

Within the `builder/` folder now created (`cd build`), start the CMake metadata (already defined on `CMakeLists.txt`)
```bash
cd build
cmake ..
```

Build the project
```bash
cmake --build
```

## Executing a compiled program
Execute the already compiled program with

```bash
./<executable_filename>
```