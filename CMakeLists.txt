cmake_minimum_required(VERSION 3.5)
project(LumixEngine)

set (CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(THIRDPARTY_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/external)

message(STATUS "CMAKE_BUILD_TYPE " ${CMAKE_BUILD_TYPE})
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Building Debug Mode")
    set(THIRDPARTY_LINUX_LIB_KEY /lib/linux64_gcc5/debug)
else()
    message(STATUS "Building Release Mode")
    set(THIRDPARTY_LINUX_LIB_KEY /lib/linux64_gcc5/release)
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

message(STATUS "Setting up ThirParty informations")
set(BGFX_INCLUDE ${THIRDPARTY_DIRECTORY}/bgfx/include)
set(BGFX_LIBDIR ${THIRDPARTY_DIRECTORY}/bgfx/${THIRDPARTY_LINUX_LIB_KEY})
set(BGFX_LIBRARIES
        bgfx
        shaderc)

set(CMFT_INCLUDE ${THIRDPARTY_DIRECTORY}/cmft/include)
set(CMFT_LIBDIR ${THIRDPARTY_DIRECTORY}/cmft/${THIRDPARTY_LINUX_LIB_KEY})
set(CMFT_LIBRARIES
        cmft)

set(CRNLIB_INCLUDE ${THIRDPARTY_DIRECTORY}/crnlib/include)
set(CRNLIB_LIBDIR ${THIRDPARTY_DIRECTORY}/crnlib/${THIRDPARTY_LINUX_LIB_KEY})
set(CRNLIB_LIBRARIES
        cmft)

set(IMGUI_INCLUDE ${THIRDPARTY_DIRECTORY})
set(IMGUI_SOURCES
        ${THIRDPARTY_DIRECTORY}/imgui/imgui.cpp
        ${THIRDPARTY_DIRECTORY}/imgui/imgui_draw.cpp
        ${THIRDPARTY_DIRECTORY}/imgui/imgui_demo.cpp
        )

set(LUA_INCLUDE ${THIRDPARTY_DIRECTORY}/lua/include)
set(LUA_LIBDIR ${THIRDPARTY_DIRECTORY}/lua/${THIRDPARTY_LINUX_LIB_KEY})
set(LUA_LIBRARIES
        lua)

set(PHYSX_INCLUDE ${THIRDPARTY_DIRECTORY}/physx/include)
set(PHYSX_LIBDIR
        ${THIRDPARTY_DIRECTORY}/physx/${THIRDPARTY_LINUX_LIB_KEY}
        ${THIRDPARTY_DIRECTORY}/physx/dll)
set(PHYSX_LIBRARIES
        PhysX3ExtensionsCHECKED
        PhysXVisualDebuggerSDKCHECKED
        PhysX3CharacterKinematicCHECKED_x64.so
        PhysX3CHECKED_x64
        PhysX3CommonCHECKED_x64
        PhysX3CookingCHECKED_x64)

set(RECAST_INCLUDE ${THIRDPARTY_DIRECTORY}/recast/include)
set(RECAST_LIBDIR ${THIRDPARTY_DIRECTORY}/recast/${THIRDPARTY_LINUX_LIB_KEY})
set(RECAST_LIBRARIES
        recast)

set(SDL_INCLUDE ${THIRDPARTY_DIRECTORY}/SDL/include)
set(SDL_LIBDIR ${THIRDPARTY_DIRECTORY}/SDL/${THIRDPARTY_LINUX_LIB_KEY})
set(SDL_LIBRARIES
        SDL)

set(STB_INCLUDE ${THIRDPARTY_DIRECTORY}/stb)


add_subdirectory(src)
add_subdirectory(test)
