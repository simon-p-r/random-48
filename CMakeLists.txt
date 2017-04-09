cmake_minimum_required(VERSION 3.2)

project(rand)


include_directories(
    ${includeDir}
)

FILE(GLOB SOURCE_FILES 
    "${CMAKE_SOURCE_DIR}/src/*.c"
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_SOURCE_DIR}/src/*.h"  
)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})

target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB} advapi32.lib)

