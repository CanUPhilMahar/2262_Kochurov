#include <iostream>

int main() {
  double x = 0;
  double *d = &x;
  std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4)
            << std::endl;
}
