#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> extract_negatives(std::vector<int> & integers) {
  std::vector<int> negatives;
  for(std::vector<int>::iterator it = integers.begin();
  it != integers.end(); ++it) {
    if(*it < 0) {
      negatives.push_back(*it);
    }
  }
  return negatives;
}

void remove_negatives(std::vector<int> & integers) {
  for(std::vector<int>::iterator it = integers.begin();
  it != integers.end();) {

    if(*it < 0) {
      it = integers.erase(it);
    } else {
      it++;
    }
  }
}