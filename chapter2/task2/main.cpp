#include <iomanip>
#include <iostream>

int main()

{
  std::cout << std::setw(4) << "1990" << std::setw(10) << "135\n"
            << std::setw(4) << "1991" << std::setw(10) << "7290\n"
            << std::setw(4) << "1992" << std::setw(10) << "11300\n"
            << std::setw(4) << "1993" << std::setw(10) << "16200\n";
  ;
  return 0;
}
