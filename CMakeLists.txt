cmake_minimum_required(VERSION 3.21)
project(Qt5QmlExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# На Qt5 ищем только базовые модули
find_package(Qt5 REQUIRED COMPONENTS Core Gui Qml Quick)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(CMAKE_EXPORT_COMPILE_COMMANDS)
    add_custom_target(copy_compile_commands ALL
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/compile_commands.json
    )
endif()

add_executable(app
    main.cpp
    frontend/qml.qrc
)

# Линкуем Qt5::QuickControls не нужно, используем просто Quick
target_link_libraries(app
    PRIVATE Qt5::Core Qt5::Gui Qt5::Qml Qt5::Quick
)

