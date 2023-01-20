#include <iostream>
#include <vector>
#include <iterator>
#include <list>

void remove_negatives_v(std::vector<int>& integers) {
  for(std::vector<int>::iterator it = integers.begin();
      it != integers.end();) {
    if(*it < 0) {
      it = integers.erase(it);
    } else {
      it++;
    }
  }
}

void remove_negatives_l(std::list<int>& integers) {
  for(std::list<int>::iterator it = integers.begin();
      it != integers.end();) {
    if(*it < 0) {
      it = integers.erase(it);
    } else {
      it++;
    }
  }
}