#include <iomanip>
#include <iostream>

int main() {
  double F_old, S_old, P_old, F_new;
  std::cout << "Enter the number of old pounds = ";
  std::cin >> F_old;
  std::cout << "Enter the number of old shillings = ";
  std::cin >> S_old;
  std::cout << "Enter the number of old pence = ";
  std::cin >> P_old;
  F_new = F_old + S_old / 20 + P_old / 240;
  std::cout << "Convert to New Pounds = J" << std::setprecision(3) << F_new;
  return 0;
}
