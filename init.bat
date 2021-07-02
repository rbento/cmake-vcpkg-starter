@echo off
cmake -DCMAKE_TOOLCHAIN_FILE=<VCPKG HOME PATH HERE>/vcpkg/scripts/buildsystems/vcpkg.cmake -DVCPKG_TARGET_TRIPLET=x64-windows-static .
cmake --build .
