cmake_minimum_required(VERSION 3.10)
project(grafo-ponderado)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable( max-chacra
  src/main.cpp
  src/loader_txt.cpp
  src/recorder_txt.cpp
)

target_include_directories(max-chacra PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
