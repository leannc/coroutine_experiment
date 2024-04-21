cmake_minimum_required(VERSION 3.21)
project(coroutine_test)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(vendor/concurrencpp)

add_executable(${PROJECT_NAME} src/concurrencpp_main.cpp
        src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
         vendor/concurrencpp/include)

target_link_libraries(${PROJECT_NAME} concurrencpp)