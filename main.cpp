#include <iostream>
#include <Point.h>
int main() {
  //  std::cout << "Hello, World!" << std::endl;
      Point a(5,5);
      Point b(4,3);
      Point c(0,0);
      c=a-b;
      std::cout << c<< std::endl;
      return 0;
}

