cmake_minimum_required(VERSION 3.19)
project(hospedaje_FR)
include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)
set(CMAKE_CXX_STANDARD 17)

add_executable(hospedaje_FR Main.cpp src/Huesped.h src/Huesped.cpp src/Propietario.h src/Propietario.cpp src/Evaluacion.h src/Evaluacion.cpp src/Hogar.h src/Hogar.cpp src/Sistema.h src/Sistema.cpp src/Reserva.h src/Reserva.cpp src)
