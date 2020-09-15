set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(${BINARY}_run main.cpp Money.cpp Money.hpp)

add_library(${BINARY}_lib STATIC main.cpp Money.cpp Money.hpp)
