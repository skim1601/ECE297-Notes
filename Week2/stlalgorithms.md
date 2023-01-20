## Finding Elements
- Common scenario:
  - You have a collection of data
  - You need to find a specific value in the collection
- Option 1 
  - Write a for loop to go through each element
  - On each iteration, compare the current value with what you’re searching for
  - Finish when you have found the element
- Option 2
  - Use ```std::find```
  - Give an iterator to the beginning and end of the container
  - Returns iterator to first match
  - ...is more idiomatic
  - ...requires less typing (and thus, less reading)
  - ...dictates intent (to find a value) in the name of the function
  - ...re-uses well-tested code (less prone to programmer error)

## Finding Elements Syntax
```
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
int main() {
  std::list<int> collection = {1, 2, 3, 4};
  auto it = std::find(collection.begin(), collection.end(), 3);
  if(it != collection.end()) {
    std::cout << "Found " << *it << "!\n";
  }
}
```

```
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
  std::vector<int> collection = {1, 1, 3, 4};
  auto const first_element = collection.begin();
  auto it = std::find(first_element + 1, collection.end(), 1);
  if(*first_element == 1 && it == collection.end()) {
  std::cout << "1 only exists as the first element\n";
  } else {
  std::cout << “1 is not the first element or is not 
  unique\n";
  }
}
```
- Some examples from ```#include <algorithm>```
  - std::min: Returns the smaller of two given values
  - std::max: Returns the larger of two given values
  - std::sort: Sort a range (e.g. vector) into ascending order
  - std::find: Find the first element of a given value in a range (start and end iterators)
  - std::swap: Swap the values of two objects
  - std::count: Count the number of elements of a given value in a range (start and end iterators)
- And many, many more! All templated for your convenience.
