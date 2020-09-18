set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(${BINARY}_run main.cpp Bank.cpp Bank.hpp Money.cpp Money.hpp)

add_library(${BINARY}_lib STATIC main.cpp Bank.cpp Bank.hpp Money.cpp Money.hpp)
