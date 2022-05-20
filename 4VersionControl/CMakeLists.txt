cmake_minimum_required(VERSION 3.10.0)

project(OLOS VERSION 1.0)
configure_file(config.h.in config.h)

add_executable(${PROJECT_NAME} main.cpp)

#add_subdirectory这个主要目的是在寻找子目录的library时提供一个路径
add_subdirectory(Adder) 
add_subdirectory(third_party/glfw) 

# target_include_directories 可以在主程序中添加头文件时不需要在加入目录信息
target_include_directories(${PROJECT_NAME} PUBLIC 
                           Adder 
                           third_party/glfw/include
) 


target_link_libraries(${PROJECT_NAME} adder glfw)