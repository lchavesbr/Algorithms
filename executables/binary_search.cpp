#include <algorithms/algorithms.hpp>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> list{1, 2, 15, 20, 21, 24, 35, 36, 44, 46, 55, 56};

  std::cout << "Binary Search: 56: " << cap1::BinarySearch(list, 56)
            << std::endl;
  return 0;
}