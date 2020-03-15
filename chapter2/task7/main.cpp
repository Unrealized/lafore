#include <iostream>

int main() {
  float C;
  std::cout << "enter temperature in celsius" << std::endl;
  std::cin >> C;
  std::cout << C << "C = " << (9.0 / 5.0) * C + 32 << "F";

  return 0;
}
