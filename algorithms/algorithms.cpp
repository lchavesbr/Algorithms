#include <algorithm>
#include <algorithms/algorithms.hpp>
#include <print>
#include <string>
namespace cap1 {
template <typename T> int BinarySearch(const std::vector<T> &list, T target) {

  int ret{-1};

  if (!std::ranges::is_sorted(list)) {
    std::print("{}\n",
               std::string("Error. List must be sorted to run Binary Search."));
    return ret;
  }
  int low_idx{0};
  int high_idx = list.size() - 1;
  int guess{0};

  while (low_idx <= high_idx) {
    int half_idx = (low_idx + high_idx) / 2;
    guess = list.at(half_idx);
    if (guess == target) {
      ret = half_idx;
      break;
    } else if (guess > target) {
      high_idx = half_idx - 1;
    } else {
      low_idx = half_idx + 1;
    }
  }
  return ret;
}

template int BinarySearch<int>(const std::vector<int> &list, int target);
}; // namespace cap1

namespace cap2 {
template <typename T> std::vector<T> SelectionSort(std::vector<T> &list) {

  std::vector<T> ret{};
  while (!list.empty()) {

    int lower_idx = FindLower(list);
    ret.push_back(list.at(lower_idx));
    list.erase(list.begin() + lower_idx);
  }
  return ret;
}
template <typename S> int FindLower(std::vector<S> &list) {
  int ret_idx{0};
  for (uint idx = 0; idx < list.size(); idx++) {
    if (list[idx] < list[ret_idx]) {
      ret_idx = idx;
    }
  }

  return ret_idx;
}
template std::vector<int> SelectionSort(std::vector<int> &list);
template int FindLower(std::vector<int> &list);
} // namespace cap2

namespace cap3 {
int Factorial(int number) {
  while (number > 1) {
    return (number * Factorial(number - 1));
  }
  return (1);
}
}; // namespace cap3