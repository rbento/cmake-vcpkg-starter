# cmake-vcpkg
A template project for C++ projects with dependencies managed with vcpkg.

### Usage
---

1. Install [vcpkg][1]

```
git clone https://github.com/microsoft/vcpkg.git

cd vcpkg

bootstrap-vcpkg.bat

```

2. Integrate with Visual Studio

```
vcpkg integrate install
```

3. Install dependencies

```
vcpkg install opengl glew glfw3 glm freetype eastl --triplet=x64-windows-static
```

4. Clone this project

```
cd ..

git clone https://github.com/rbento/cmake-vcpkg.git

cd cmake-vcpkg
```

6. Configure vcpkg home

Set the path to the vcpkg home directory in `init.bat`.

```
cmake -DCMAKE_TOOLCHAIN_FILE=<VCPKG HOME PATH HERE>/vcpkg/scripts/buildsystems/vcpkg.cmake
```

7. Configure the Visual Studio solution and project name

Set the `project` value in `CMakeLists.txt`.

```
project("<SOLUTION NAME HERE>")
```

8. Generate the Visual Studio project

```
init.bat
```

9. Done

Now open the generated project solution on Visual Studio.

[1]: https://github.com/microsoft/vcpkg
