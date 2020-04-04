#include <iostream>

int main() {
  int var;
  float temp, c_temp, test;
  std::cout << "press 1 to convert celsius to fahrenheit" << std::endl;
  std::cout << "press 2 to convert fahrenheit to celsius" << std::endl;
  std::cin >> var;
  switch (var) {
    case 1:
      std::cout << "enter celsius temperature" << std::endl;
      std::cin >> temp;
      c_temp = temp * (9.0 / 5.0) + 32;
      std::cout << temp << "C = " << c_temp << "F" << std::endl;
      break;
    case 2:
      std::cout << "enter fahrenheit temperature" << std::endl;
      std::cin >> temp;
      c_temp = (temp - 32) * (5.0 / 9.0);
      std::cout << temp << "F = " << c_temp << "C" << std::endl;
      break;
    default:
      std::cout << "error";
  }
  return 0;
}
