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