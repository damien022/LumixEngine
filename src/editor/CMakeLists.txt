message(STATUS "==== Editor ====")

set(LUMIX_EDITOR_INCLUDE
        ${LUMIX_ENGINE_INCLUDE}
        ${SDL_INCLUDE}
        ${CMAKE_CURRENT_SOURCE_DIR}
        CACHE INTERNAL "Lumix Editor Include")

include_directories(${LUMIX_EDITOR_INCLUDE})


set(SOURCE_FILES
        ${IMGUI_SOURCES}
        asset_browser.cpp
        asset_browser.h
        editor_icon.cpp
        editor_icon.h
        file_system_watcher.h
        gizmo.cpp
        gizmo.h
        ieditor_command.h
        log_ui.cpp
        log_ui.h
        measure_tool.cpp
        measure_tool.h
        metadata.cpp
        metadata.h
        platform_interface.h
        prefab_system.cpp
        prefab_system.h
        profiler_ui.cpp
        profiler_ui.h
        property_grid.cpp
        property_grid.h
        render_interface.h
        settings.cpp
        settings.h
        studio_app.cpp
        studio_app.h
        utils.cpp
        utils.h
        world_editor.cpp
        world_editor.h
        linux/file_system_watcher.cpp
        linux/platform_interface.cpp
        )

add_library(LumixEditor STATIC ${SOURCE_FILES})
target_link_libraries(LumixEditor LumixEngine)