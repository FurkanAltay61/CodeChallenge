set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
add_library(my_library Longest_vowel_chain.cpp)
add_executable(my_test test.cpp)
target_link_libraries(my_test PRIVATE my_library)
add_test(NAME MyTest COMMAND my_test)