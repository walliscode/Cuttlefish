
add_library(display
    display_manager.cpp
    tile.cpp
    session.cpp
)

target_include_directories(display
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

message("display include dir: ${CMAKE_SOURCE_DIR}/include")

target_link_libraries(display
    PUBLIC
      SFML::Graphics
)
