add_library(grav STATIC)

target_sources(grav PRIVATE
    src/core.cpp
)

target_include_directories(grav
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(grav PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(grav PRIVATE /W4)
else()
    target_compile_options(grav PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()