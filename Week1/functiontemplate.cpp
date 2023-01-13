// Tell the compiler we want to use templates
// Specify the name for what will be replaced in the template
#include <iostream>
template <typename Type> 

void swap(Type &a, Type& b){
  Type temp = a; // Compiler replaces Type with the actual datatype (eg. int)
  a = b;
  b = temp;
}

int main(void){
  int i = 5, j = 7;
  std::cout << "Before Swap 1 ";
  std::cout << "i: " << i << " j: " << j << std::endl;
  swap(i, j);
  std::cout << "After Swap 1 ";
  std::cout << "i: " << i << " j: " << j << std::endl;

  double x = 0.5, y = 4.6;
  std::cout << "Before Swap 2 ";
  std::cout << "x: " << x << " y: " << y << std::endl;
  swap<double>(x, y);
  std::cout << "After Swap 2 ";
  std::cout << "x: " << x << " y: " << y << std::endl;
  return 0;
}