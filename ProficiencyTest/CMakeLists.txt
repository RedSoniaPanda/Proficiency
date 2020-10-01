# Code partially provided by Google
# https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html

# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests - not created yet
add_executable(Google_Tests_run test_linear_linked_lists.cpp ${PROJECT_SOURCE_DIR}/../LinearLinkedLists/List.cpp
        ${PROJECT_SOURCE_DIR}/../LinearLinkedLists/List.h ../CircularLinkedLists/CircularList.cpp ../CircularLinkedLists/CircularList.h test_circular_linked_list.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)