cmake_minimum_required(VERSION 3.26)
project(cppCourse)

set(CMAKE_CXX_STANDARD 17)

add_executable(cppCourse
        Exercism/lasagna/lasagna.cpp
        "Exercism/last will/test.cpp"
        "Exercism/log levels/test.cpp"
        "Exercism/pacman rules/test.cpp"
        hello_world.cpp
        Exercism/raindrops/test.cpp
)
