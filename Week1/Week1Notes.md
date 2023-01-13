# Calling Templates
<ul>
  <li>Defaults to integer in this example</li>
  <li>swap<double>(i,j)</li>
  <li>cannot swap two different types, both parameters have to be the exact same</li>
  <ul>
  <li>```i = 5, j = 9;```</li>
  <li>```swap<double>(i, j);```</li>
  <li>will not compile, since i, j are int but tehplate type is double</li>
  <li>```swap<double>((double)i, (double)j); // This would work```</li>
  </ul>
</ul>

# Minimum Function using template
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

Definitions must be in the header file
<ul>
  <li>Compiler must be able to generate code whenever it sees a new templated pair</li>
  <li>Cannot seperate interface (*.h or *.hpp) from definition (*.cpp) when using templates</li>
</ul>

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
Make is a wrapper for g++ command

Simple makefile for compiling a program from two C source files.  
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

In this example, make produces the object files main.o and data.o, and the executable file functions:
```
$ make 
cc -o functions main.o data.o 
cc -O -c main.c 
cc -O -c data.c 
```

# Tips for Writing Templates
<ul>
  <li>Don't</li>
  <ul>
    <li>Template errors can be very complex and overwhelming for beginners</li>
    <li>Many templated functions and classes already exists</li>
    <ul><li>**The Stanard Template Library** is your friend!</li></ul>
  </ul>
  <li>If you do...</li>
  <ol>
    <li>Write the code for one type first</li>
    <li>Test it</li>
    <li>Convert it to a template</li>
    <li>Test again with multiple types</li>
  </ol>
</ul>