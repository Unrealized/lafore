#include <ctype.h>

#include <iostream>

int main()

{
  float sterlings, franks, marks, yonas, coins;
  std::cin >> coins;
  sterlings = coins / 1.487;
  franks = coins / 0.172;
  marks = coins / 0.584;
  yonas = coins / 0.00955;
  std::cout << coins << "$ = " << sterlings << " sterlings\n";
  std::cout << coins << "$ = " << franks << " franks\n";
  std::cout << coins << "$ = " << marks << " marks\n";
  std::cout << coins << "$ = " << yonas << " yonas\n";

  return 0;
}
