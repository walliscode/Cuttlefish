cmake_minimum_required(VERSION 3.3)
project(Cuttlefish
        VERSION 0.0.1
        DESCRIPTION "A tiling manager for a Game Engine"
        LANGUAGES CXX)

add_executable(
        Aquarium
)
target_compile_features(
        Aquarium PRIVATE cxx_std_20
)

target_sources(Aquarium
        PRIVATE
        runner/main.cpp)