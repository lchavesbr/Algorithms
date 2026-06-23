#include <algorithms/algorithms.hpp>
#include <iostream>

int main() {

  std::cout << "Enter a number to calculate factorial: ";
  int number;
  std::cin >> number;

  std::cout << "Factorial of " << number << " is: " << cap3::Factorial(number)
            << std::endl;

  return 0;
}