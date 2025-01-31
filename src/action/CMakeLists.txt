add_library(action
  event_handler.cpp
)

target_include_directories(action
  PUBLIC
      ${CMAKE_SOURCE_DIR}/include
)
