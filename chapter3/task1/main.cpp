#include <iomanip>
#include <iostream>

int main()

{
  int x, y;
  std::cout << "enter number ";
  std::cin >> x;
  for (int j = 1; j <= 200; j++) {
    y = x * j;
    if (j % 10 > 0)
      std::cout << std::setiosflags(std::ios::left) << std::setw(6) << y;
    else

      std::cout << std::setiosflags(std::ios::left) << std::setw(6) << y
                << std::endl;
  }
  return 0;
}
