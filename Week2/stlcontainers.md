# std::map
- std::map is an associative container in the C++ Standard Template Library (STL). It stores a collection of key-value pairs, where each key is unique and is used to access the associated value. The keys are stored in a sorted order, which allows for efficient insertion, removal, and lookup of elements.

- The std::map container is implemented as a red-black tree, which is a type of balanced binary search tree. This means that the average time complexity for insertion, removal and lookup is O(log n) where n is the number of elements in the container.

- A std::map container is defined by two template arguments: the types of the key and value. For example, the following code creates a std::map that stores integers as keys and strings as values:
```
std::map<int, std::string> myMap;
```

- You can insert elements into the map by creating a std::pair of the key and value and passing it to the insert() method. For example:
```
myMap.insert(std::make_pair(1, "Hello"));
myMap.insert(std::make_pair(2, "World"));
```

- You can also use the ```[]``` operator to insert or update elements in the map. For example:
```
myMap[3] = "!";
```
- You can access elements in the map using the [] operator or the at() method. The [] operator will insert a default-constructed element if the key is not found in the map, while the at() method will throw an exception if the key is not found.

- You can also use the find() method to check if a key exists in the map and to retrieve the corresponding value. The find() method returns an iterator to the element with the given key, or end() if the key is not found.

- The std::map container also provides various other methods such as erase(), clear(), size(), etc. that can be used to manipulate and query the container.

- In summary, std::map is a useful container when you need to store a collection of unique key-value pairs and you frequently need to perform operations such as insertion, removal, and lookup based on the key. Its implementation as a red-black tree provides efficient performance for these operations.

## Other containers
- std::map 
  - find: O(log n) 
  - insert: O(log n) 
  - erase: O(log n) 
  - Use when you need the keys to be ordered
- std::multimap
  - find: O(log n) 
  - insert: O(log n) 
  - erase: O(log n) 
  - Use when you have duplicate keys
- std::unordered_map 
  - find: O(1) 
  - insert: O(1) 
  - erase: O(1) 
  - Use when the order of keys does notmatter
- std::set 
  - find: O(log n) 
  - insert: O(log n) 
  - erase: O(log n) 
  - Use when you only need keys and not their values
- std::queue
  - push: O(1)
  - pop: O(1)
  - Use when you want first-in, first-out (FIFO) semantics
- std::priority_queue
  - push: O(log n)
  - pop: O(1)
  - Keeps elements ordered. Use when you want fast look-up of  the largest (by default) element.
- std::stack 
  - push: O(1)
  - pop: O(1) 
  - Use when you want last-in, first-out(LIFO) semantics
- std::deque
  - push: O(1)
  - pop: O(1)
  - Similar to a vector, but can be faster if there are frequent insertions/deletions