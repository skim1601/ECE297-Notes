# Iterator
An iterator in C++ is an object that can be used to traverse a container, such as a vector or a list. It allows you to access the elements of the container one at a time, in a specific order. Iterators have their own set of operations, such as incrementing and dereferencing, that can be used to move through the container and access its elements. There are different types of iterators, such as forward iterators, bidirectional iterators, and random-access iterators, which have different capabilities and can be used in different situations.

- Here are some examples of using iterators in C++:

- Iterating through a vector:
```
std::vector<int> v = {1, 2, 3, 4, 5};
std::vector<int>::iterator it;
for (it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
}
```

- This code uses a vector of integers, and creates an iterator ```it``` to traverse it. The vector's ```begin()``` and ```end()``` methods are used to get the start and end of the vector. The iterator is incremented with ```++it``` and the value at the iterator is accessed with ```*it```.

- Using a reverse iterator:
```
std::list<int> lst = {1, 2, 3, 4, 5};
std::list<int>::reverse_iterator rit;
for (rit = lst.rbegin(); rit != lst.rend(); ++rit) {
    std::cout << *rit << " ";
}
```

- This code uses a list of integers, and creates a reverse iterator ```rit``` to traverse it in reverse order. The list's ```rbegin()``` and ```rend()``` methods are used to get the start and end of the list in reverse order. The iterator is incremented with ```++rit``` and the value at the iterator is accessed with ```*rit```.

- Using a const_iterator:
```
std::set<int> s = {1, 2, 3, 4, 5};
std::set<int>::const_iterator cit;
for (cit = s.begin(); cit != s.end(); ++cit) {
    std::cout << *cit << " ";
}
``` 
- This code uses a set of integers and a const_iterator ```cit``` to traverse it. The set's ```begin()``` and ```end()``` methods are used to get the start and end of the set. The iterator is incremented with ```++cit``` and the value at the iterator is accessed with ```*cit```. Using a const_iterator ensures that the elements of the set will not be modified while iterating over it.
- Note that the above examples are just a basic usage, there are many more complex ways of using iterators and different types of iterators such as move iterators and insert iterators.

# Erase
- In C++, the ```erase``` function is a method that can be used to remove elements from a container. The specific form of the ```erase``` function that takes an iterator as an argument is used to remove an element from a container at a specific position. The position is specified by the iterator, which points to the element that is to be removed.

- For example, to remove an element from a vector at position 2, we can use the following code:
```
std::vector<int> v = {1, 2, 3, 4, 5};
std::vector<int>::iterator it = v.begin() + 2;
v.erase(it);
```

- The ```erase``` function takes the iterator that points to the element that is to be removed as an argument. In this example, the iterator ```it``` is initialized to point to the 3rd element in the vector, which is 2. Then the ```erase``` function is called with ```it``` as the argument, and the element at that position is removed from the vector.
- It's worth noting that the erase function returns an iterator pointing to the element following the last removed element.
- If you are erasing a range of elements in a container, you can use the erase function that takes two iterator arguments, specifying the beginning and end of the range to remove.

```
std::vector<int> v = {1, 2, 3, 4, 5};
std::vector<int>::iterator start = v.begin() + 1;
std::vector<int>::iterator end = v.begin() + 3;
v.erase(start, end);
```
- This code removes the elements at positions 1 and 2, so the resulting vector would be ```{1, 4, 5}```
- It's important to note that calling erase on an invalid iterator or out of range iterator can result in undefined behavior.
