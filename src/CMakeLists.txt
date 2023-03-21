file(GLOB_RECURSE SOURCES *.h *.cpp)  #Todas las fuentes sin el Main

set(BINARY ${CMAKE_PROJECT_NAME})  # El nombre va a a estar en el CMake principal

# Definicion variable sources
set(SOURCES ${SOURCES})

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}_lib)


# Instrucción que define el ejecutable a partir de las fuentes definidas
add_executable(${BINARY}_exe ${SOURCES})  # Las fuentes mas el archivo main