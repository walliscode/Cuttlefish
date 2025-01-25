cmake_minimum_required(VERSION 3.28)
project(Cuttlefish
        VERSION 0.0.1
        DESCRIPTION "A tiling manager for a Game Engine such as SteamRot"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Fetch content (using CMakes built in functionality for fetching libraries)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake") # add cmake folder to module path for fetch content
include(FetchContent)
include(FetchSFML)

add_subdirectory(src)

add_executable(
        Aquarium
        runner/main.cpp
)
target_compile_features(
        Aquarium PRIVATE cxx_std_20
)

target_link_libraries(
        Aquarium
        PRIVATE
        display
)






