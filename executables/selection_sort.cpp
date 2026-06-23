#include <algorithms/algorithms.hpp>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> list{1, 13, 2, 17, 33, 21, 15, 35, 36, 44, 22, 100, 56};

  for (const auto &i : list)
    std::cout << i << ' ';
  std::cout << std::endl;

  std::cout << "Selection Sort: \n";
  std::vector<int> sorted_list = cap2::SelectionSort(list);
  for (const auto &i : sorted_list)
    std::cout << i << ' ';
  std::cout << std::endl;

  return 0;
}