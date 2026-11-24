#include <iostream>

int main() {
  int x[10][10];
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      x[i][j] = i * 10 + j;

  std::cout << "x[0][10] = " << x[0][10] << std::endl;
  std::cout << "x[1][-1] = " << x[1][-1] << std::endl;
  std::cout << "x[1][0]  = " << x[1][0] << std::endl;
  std::cout << "x[0][9]  = " << x[0][9] << std::endl;
  std::cout << "x[10][0] = " << x[10][0] << std::endl;
  std::cout << "x[-1][0] = " << x[-1][0] << std::endl;
}
