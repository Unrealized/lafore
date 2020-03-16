#include <iomanip>
#include <iostream>

int main() {
  std::cout << std::setiosflags(std::ios::left) << std::setw(13) << "surname"
            << std::setw(12) << "name" << std::setw(16) << "addres"
            << std::setw(18) << "town" << std::endl;
  std::cout << std::setw(57) << std::setfill('-') << "-" << std::setfill(' ')
            << std::endl;
  std::cout << std::setw(13) << "Petrov" << std::setw(12) << "Vasya"
            << std::setw(16) << "klenoavaya 16" << std::setw(18)
            << "Saint-Petersburg" << std::endl;
  std::cout << std::setw(13) << "Ivanov" << std::setw(12) << "Serega"
            << std::setw(16) << "Osinovaya 3" << std::setw(18) << "Nahodka"
            << std::endl;
  std::cout << std::setw(13) << "Sidorov" << std::setw(12) << "Vanya"
            << std::setw(16) << "Berezovaya 21" << std::setw(18)
            << "Kaliningrad" << std::endl;
  return 0;
}
