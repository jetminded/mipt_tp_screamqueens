cmake_minimum_required(VERSION 3.10)
set(DCMAKE_SH="CMAKE_SH-NOTFOUND")
set(CMAKE_CXX_COMPILER g++)
project(ScreamQueens LANGUAGES CXX)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#find_package(GTest)
#find_package(Threads)
#
#include_directories (${GTEST_INCLUDE_DIRS})
include_directories (${PROJECT_SOURCE_DIR})

#add_subdirectory(person ${PROJECT_SOURCE_DIR}/lib/person)
#add_subdirectory(phrases ${PROJECT_SOURCE_DIR}/lib/phrases)
#add_subdirectory(stats ${PROJECT_SOURCE_DIR}/lib/stats)
#add_subdirectory(database ${PROJECT_SOURCE_DIR}/lib/database)
#add_subdirectory(database/filedatabase ${PROJECT_SOURCE_DIR}/lib/database/filedatabase)
#add_subdirectory(exceptions ${PROJECT_SOURCE_DIR}/lib/exceptions)

add_executable(Main main.cpp)
#add_executable(PersonTest tests/person_tests.cpp)
#add_executable(StatsTest tests/stats_tests.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})


#target_link_libraries(Main PersonLibrary StatsLibrary PhrasesLibrary FactoryLibrary)
#set_target_properties(FactoryLibrary PROPERTIES LINKER_LANGUAGE CXX)
#set_target_properties(DatabaseLibrary PROPERTIES LINKER_LANGUAGE CXX)
#set_target_properties(ExceptionLibrary PROPERTIES LINKER_LANGUAGE CXX)
#target_link_libraries(CTest lib)

#target_include_directories(C PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
#target_include_directories(CTest PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

#target_link_libraries(CTest ${GTEST_LIBRARIES} Threads::Threads)