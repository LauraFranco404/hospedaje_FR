file(GLOB_RECURSE SOURCES Huesped.cpp Huesped.h Propietario.cpp Propietario.h Evaluacion.cpp Evaluacion.h Hogar.cpp Hogar.h Sistema.cpp Sistema.h Reserva.cpp Reserva.h)  #Todas las fuentes sin el Main

set(BINARY ${CMAKE_PROJECT_NAME})  # El nombre va a a estar en el CMake principal

# Definicion variable sources
set(SOURCES ${SOURCES})

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}_lib)


# Instrucción que define el ejecutable a partir de las fuentes definidas
add_executable(${BINARY}_exe ${SOURCES} Main.cpp Huesped.cpp Huesped.h Propietario.cpp Propietario.h Evaluacion.cpp Evaluacion.h Hogar.cpp Hogar.h  Sistema.cpp Sistema.h Reserva.cpp Reserva.h)  # Las fuentes mas el archivo main
