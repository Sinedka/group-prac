cmake_minimum_required(VERSION 3.21)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Quick Qml QuickControls2)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(CMAKE_EXPORT_COMPILE_COMMANDS)
    add_custom_target(copy_compile_commands ALL
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/compile_commands.json
    )
endif()

qt5_add_resources(QT_RESOURCES frontend/qml.qrc)

set(SOURCES
    backend/src/main.cpp
    backend/src/counter.cpp
)

set(HEADERS
    backend/include/counter.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${QT_RESOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Quick Qt5::Qml Qt5::QuickControls2)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/backend/include)
