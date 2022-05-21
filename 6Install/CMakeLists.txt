cmake_minimum_required(VERSION 3.10.0)

project(OLOS VERSION 1.0)
configure_file(config.h.in config.h)

option(USE_ADDER "use a simple add lib to add two floats" OFF)
message("USE_ADDER: " ${USE_ADDER})
if(USE_ADDER)
    add_definitions(-DUSE_ADDER_ON)
    add_subdirectory(Adder) 
    list(APPEND EXTRA_INCLUDE_DIRS Adder)
    list(APPEND EXTRA_LINK_LIBS adder)
endif()


add_executable(${PROJECT_NAME} main.cpp)

#add_subdirectory这个主要目的是在寻找子目录的library时提供一个路径

# target_include_directories 可以在主程序中添加头文件时不需要在加入目录信息
target_include_directories(${PROJECT_NAME} PUBLIC 
                           ${EXTRA_INCLUDE_DIRS} 
) 


target_link_libraries(${PROJECT_NAME} 
                      ${EXTRA_LINK_LIBS}
)

message("PROJET_BINRAY_DIR: "  ${PROJECT_BINARY_DIR})
message("CMAKE_INSTALL_PREFIX: " ${CMAKE_INSTALL_PREFIX})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/config.h" DESTINATION include)

