add_executable(binary_search binary_search.cpp)
target_link_libraries(binary_search PRIVATE algorithms cxx_setup)

add_executable(selection_sort selection_sort.cpp)
target_link_libraries(selection_sort PRIVATE algorithms cxx_setup)

add_executable(factorial factorial.cpp)
target_link_libraries(factorial PRIVATE algorithms cxx_setup)