message(STATUS "==== Studio ====")

include_directories(${LUMIX_EDITOR_INCLUDE})
message(STATUS LUMIX_EDITOR_INCLUDE ${LUMIX_EDITOR_INCLUDE})
set(SOURCE_FILES linux/main.cpp)

set(LUMIX_STUDIO_LIBDIR
        ${SDL_LIBDIR}
        ${LUA_LIBDIR}
        )
set(LUMIX_STUDIO_LIBRARIES
        LumixEditor
        LumixEngine
        ${SDL_LIBRARIES}
        ${LUA_LIBRARIES}
        X11
        dl
        pthread
        )

link_directories(${LUMIX_STUDIO_LIBDIR})

add_executable(LumixStudio ${SOURCE_FILES})
target_link_libraries(LumixStudio ${LUMIX_STUDIO_LIBRARIES})