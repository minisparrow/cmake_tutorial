add_executable(adder_test  adder_test.cpp)


target_include_directories(adder_test PUBLIC 
                           ${EXTRA_INCLUDE_DIRS}
)
target_link_libraries(adder_test PUBLIC ${EXTRA_LINK_LIBS})


add_test(NAME "AdderTest1" COMMAND "adder_test" 1 6 WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
add_test(NAME "AdderTest2" COMMAND "adder_test" 2 8 WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
add_test(NAME "AdderTest3" COMMAND "adder_test" 3 2 WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
add_test(NAME "AdderTest4" COMMAND "adder_test" 4 92 WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
message("CMAKE CURRENT BINARY DIR" ${CMAKE_CURRENT_BINARY_DIR})

install(TARGETS adder_test DESTINATION bin)