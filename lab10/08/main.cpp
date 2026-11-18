#include <iostream>

int main() {
  int a[20];
  for (int i = 0; i < 20; i++)
    a[i] = i;
  int *b = a + 8;
  for (int i = -8; i < 12; i++)
    std::cout << b[i] << ' ';
}
