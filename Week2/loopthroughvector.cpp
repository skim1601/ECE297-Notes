#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> numbers = {1, 2, 3, 4};

// using indices 
for(size_t i = 0; i < numbers.size(); ++i) {
  std::cout << numbers[i] << " ";
}

std::cout << "\n";

// using iterators 
for(std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
  std::cout << *it << " ";
}

std::cout << std::endl;