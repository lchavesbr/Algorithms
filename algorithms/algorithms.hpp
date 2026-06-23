#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>

namespace cap1 {
// Return index of found item. -1 otherwise.
template <typename T> int BinarySearch(const std::vector<T> &list, T target);

}; // namespace cap1

namespace cap2 {
template <typename T> std::vector<T> SelectionSort(std::vector<T> &list);
template <typename S> int FindLower(std::vector<S> &list);

}; // namespace cap2

namespace cap3 {
int Factorial(int number);
}; // namespace cap3
#endif // ALGORITHMS_HPP