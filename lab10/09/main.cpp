#include <iostream>

int main() {
  double a[10];
  std::cout << &a[8] - &a[3] << std::endl;
}
