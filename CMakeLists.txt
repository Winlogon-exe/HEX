cmake_minimum_required(VERSION 3.5)

project(Hex VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 REQUIRED COMPONENTS Widgets SerialPort)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets SerialPort)

set(HEADERS    
        inc/Utils/HexDebug.h
        inc/Core/Macros.h
)

set (SOURCES 
        src/main.cpp
        src/Utils/HexDebug.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::SerialPort)

