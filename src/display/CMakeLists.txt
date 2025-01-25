# add cmake display target and add c++ display module
add_library(display)

# make sure the target is compiled as a module
target_compile_features(display PRIVATE cxx_std_20)

# add interface files which should be scanned as modules
target_sources(display
        PUBLIC
        FILE_SET display_module_files
        TYPE CXX_MODULES
        FILES
        display.cppm
        display_manager.cppm
               )

# add implementation files for the module
# target_sources(display
#        PUBLIC
#        display_manager.cpp)
#
# link external libraries and modules
target_link_libraries(display
        PRIVATE
        SFML::Graphics)
