add_library(adder Adder.cpp)

install(TARGETS adder DESTINATION lib)
install(FILES Adder.h DESTINATION include)