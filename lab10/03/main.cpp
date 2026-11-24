#include <iostream>

int main() {
  int a = 5, b = 3;
  int product = a * b;
  int bitAnd = a & b;
  int *p = &a;
  *p = 7;
  int &ref = b;
  ref = 9;
  std::cout << product << " " << bitAnd << " " << a << " " << b << std::endl;
}
