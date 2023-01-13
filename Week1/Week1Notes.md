# Calling Templates
-
  - Defaults to integer in this example
  - ```swap<double>(i,j)```
  - Cannot swap two different types, both parameters have to be the exact same
    - ```i = 5, j = 9```
    - ```swap<double>(i, j);```
    - will not compile, since i, j are int but tehplate type is double
    - ```swap<double>((double)i, (double)j); // This would work```

## Minimum Function using template
```
// Minimum using template
template<typename T> T my_min(T& a, T& b) {
    T result;
    if (a > b)
        result = b;
    else
        result = a;
    
    return result; 
}
```

# A Simple Example: Pairs

- Definitions must be in the header file
  - Compiler must be able to generate code whenever it sees a new templated pair</li>
  - Cannot seperate interface (*.h or *.hpp) from definition (*.cpp) when using templates</li>

```
// An example of pair Class
// Can use more than one type (eg. char and int)
template<typename FirstT, typename SecondT> class pair { 
  public:
    pair(FirstT first_val, SecondT second_val);
    void set_first(FirstT first_val);
    void set_second(SecondT second_val);

    First get_first() const;
    SecondT get_second() const;

  private:
    FirstT first;
    SecondT second;
};
```

# Make 
- Make is a wrapper for g++ command

- Simple makefile for compiling a program from two C source files.  
```
.KEEP_STATE

functions: main.o data.o 
         cc -O -o functions main.o data.o 
main.o: main.c 
        	cc -O -c main.c 
data.o: data.c 
         cc -O -c data.c 
clean: 
        	rm functions main.o data.o
```

- In this example, make produces the object files main.o and data.o, and the executable file functions:
```
$ make 
cc -o functions main.o data.o 
cc -O -c main.c 
cc -O -c data.c 
```

## Tips for Writing Templates
<ul>
  <li>Don't</li>
  <ul>
    <li>Template errors can be very complex and overwhelming for beginners</li>
    <li>Many templated functions and classes already exists</li>
    <ul><li>The Stanard Template Library is your friend!</li></ul>
  </ul>
  <li>If you do...</li>
  <ol>
    <li>Write the code for one type first</li>
    <li>Test it</li>
    <li>Convert it to a template</li>
    <li>Test again with multiple types</li>
  </ol>
</ul>

# The Standard Template Library
- Writing templates can be difficult
- Using templates is much easier and more productive
- (E.g.) write your own sort function versus use a templated sort function

The STL has you covered
- swap, sort, pair, min, and more

## The Containers Library
- Several data structures are available
  - vector - a dynamic contiguous array of elements of some type (not many types)
  - list - a doubly linked-list some type

- The data stuctures are templated
  - ```vector<double>``` - a dynamic array that stores doubles
  - ```list<std::string>``` - a linked-list that stores std::strings

## Motivating std::vector
- We want to read integers from the user to an array until EOF
  - ```1 -20 3 31 55 <Ctrl+D>```
- Then do some work on the array

- Problem: How big of an array should we allocate?
  - We won't know until after all the input is read
- Solution: linked-list (std::list)
  - But lists are inefficient - accessing an requires O(n)

- Accessing elements of vector
  - ```int value = my_vector[42];```
- Inserting new elements (Complexity: O(1))
  - ```my_vector.push_back(1234);```
- Modifying existing elements (Complexity: O(1))
  - ```my_vector[42] = 64;```
- Querying number of elements
  - ```int num_entries = my_vector.size();```

```
  std::vector<int> integer; // Create an empty vector
  integer.push_back(1); // Insert a new int lement into the vector. Will grow in size to accomodate.
```

- print_vector function implementation
```
void print_vector(const std::vector<int> & integers) {
    for (int i = 0; i < integers.size(); i++){
        std::cout << integers[i] << " ";
    }
}
```

## Vector Behind the Scenes
- Default constructor of vector invokes a contiguous array of capacity N
- A new element is added, so the array gets updated, size increases by 1
  - When size is equal to capacity, create a new array of capacity = 2*size
  - Copy the old array's values into it.
- Delete the old array to avoid memory leaks.

## Vectors Versus C-Style Arrays
- C-style array could cause Shallow copy, which ends up in memory leak
```clist1 = clist2;```
- In this case, vector2 gets deep-copied, hence no need to worry about memory leaks
```vector1 = vector2;``` 
- Do we need to delete vectors?
  - No, they are not pointers
  
## Bounds Checking with Vectors
- ```operator[]``` does not create values
- ```operator[]``` does not check bounds
  - Out-of-bounds indices will cause your program to crash
  - Operating Systems usually stop the access, however it could compile 
    - Program could access unexpected values
- For milestones, can use the debug-check configuration to do bounds checking
  - Will make your program run more slowly.

``` 
std::vector<int> v1; // size 0
v1.push_back(-3); // size 1;
v1[0] = -2; // replace -3 with -2
v1[1] = 5; // ?
```