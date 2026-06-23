#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>

namespace cap1 {

// Return index of found item. -1 otherwise.
template <typename T> int BinarySearch(const std::vector<T> &list, T target);

}; // namespace cap1
#endif // ALGORITHMS_HPP