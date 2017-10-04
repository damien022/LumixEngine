message(STATUS "==== Lumix ====")

set(LUMIX_INCLUDE
        ${CMAKE_CURRENT_SOURCE_DIR}
        CACHE STRING "Main Lumix Enigne Source Dir")

add_subdirectory(engine)