cmake_minimum_required(VERSION 3.0.0)
project(Tutorial VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

#add_subdirectory(Codewars/C++/Longest_vowel_chain)
#add_subdirectory(Codewars/C++/CrossingRiver)
#add_subdirectory(Codewars/C++/Split_strings)
add_subdirectory(Codewars/C++/Directions_Reduction)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)