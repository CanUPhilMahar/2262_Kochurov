
#include <iostream>

int main() {
  int x = 1, y = 2;
  int *p = &y, *q = &x;
  if (p < q)
    std::cout << "Yes";
  else
    std::cout << "No";
}
