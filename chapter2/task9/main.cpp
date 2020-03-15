#include <iostream>

int main() {
  int a, b, c, d;
  char fr;
  std::cout << "enter the first fraction!" << std::endl;
  std::cin >> a >> fr >> b;
  std::cout << "enter the second fraction!" << std::endl;
  std::cin >> c >> fr >> d;
  std::cout << "sum of fractions = " << a * d + b * c << "/" << b * d;
  return 0;
}
