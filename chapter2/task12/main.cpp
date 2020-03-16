#include <iomanip>
#include <iostream>

int main() {
  double F_new, s, p;
  int F_old, S_old, P_old;
  std::cout << "Enter the number of pounds = ";
  std::cin >> F_new;

  F_old = static_cast<int>(F_new);
  s = (F_new - F_old) * 20;
  S_old = static_cast<int>(s);
  p = (s - S_old) * 12;
  P_old = static_cast<int>(p);

  std::cout << "Convert to New Pounds = J" << F_old << "." << S_old << "."
            << P_old;

  return 0;
}
