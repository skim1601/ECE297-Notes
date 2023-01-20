## What is an iterator?
- An iterator identifies an element in a container
  - Similar to a pointer
- An iterator allows us to access an element in a container
  - Also similar to a pointer
- An iterator allows us to move between elements in a container
  - Similar to pointer arithmetic
- An iterator is restricted to efficient operations

## Iterator versus operator[]
- Why not just use ```array[index]``` to access elements?
  - operator[] implies random access
  - Random access is not supported by all data structures
- In the STL, all containers have iterators defined
  - Each of these iterator types are different:
    - ```std::vector<int>::iterator```
    - ```std::vector<float>::iterator```
    - ```std::list<int>::iterator```

## std::vector functions
- Already Covered
  - Accessing ```operator[]```
  - Inserting ```push_back()```
  - Modifying ```operator[]```
  - Querying ```size()```

- Complexity of all of the above:
  - O(1)

- Today’s New Functions
  - Iterating ```begin()```
    - Returns an iterator to the first element
  - Iterating ```end()```
    - Returns an iterator to the element following the last element
    - Used for bounds checking

## What does this do?
```
std::vector<int> numbers = {1, 2, 3, 4};
// Case 1 
std::vector<int>::iterator it = numbers.begin();
it = 5; // Case 2
it++; // Case 3
it--; // Case 4
int x = *it; // Case 5
it != numbers.end(); // Case 6
it < numbers.end(); // Case 7
*it = 27; // Case 8
it = numbers.begin() + 2; 
```
## How does erase perform?
- ```erase(iterator)```
  - Accepts an iterator to the element that should be erased
  - Returns the next iterator in the vector
  - Complexity: O(n)
- What is the complexity of ```remove_negatives```?
  - Consider a vector that contains allnegative values  
  - We loop over n elements
  - Worst case: we erase n times
  - Complexity: O(n^2)

## std::list is a Doubly Linked List
- Double links (next and previous) allow for bi-directional access
- Fast insert and erase
  - Only need to update neighbours

## std::vector vs std::list
|                  | std::vector                                            | std::list                                                   |
|------------------|--------------------------------------------------------|-------------------------------------------------------------|
| begin            | O(1)                                                   | O(1)                                                        |
| end              | O(1)                                                   | O(1)                                                        |
| push_back        | O(1)                                                   | O(1)                                                        |
| size             | O(1)                                                   | O(1)                                                        |
| operator[]       | O(1)                                                   | N/A                                                         |
| erase(iterator)  | O(n)                                                   | O(1)                                                        |
| insert(iterator) | O(n)                                                   | O(1)                                                        |
| Iterator Type    | Random Access it++ allowed it-- allowed it + 5 allowed | Bidirectional it++ allowed  it-- allowed it + 5 not allowed |

## Using C++ 11’s autokeyword
- Instead of specifying a type (such as int), we can use the auto keyword 
  - autoasks the compiler to determine the type for us
- Using auto can help...
  - Save on typing
  - Keep code compiling when you switch types around frequently
- Caution: You should always know what the actual type will be
-  The type is still static
  -  autodoes not mean the type can change dynamically –this is not python

## Simplifying Iterator Code with auto
```
for(std::vector<int>::iterator it = numbers.begin();
    it != numbers.end(); ++it) {
  std::cout << *it << " ";
}
std::cout << "\n";
```