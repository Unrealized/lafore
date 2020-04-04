#include <conio.h>

#include <iostream>
int main() {
  long a = 0;
  long b = 1000000;
  char ch;
  std::cout << "insert the number ";
  for (int j = 5; j >= 0; j--) {
    ch = getche();
    b = b / 10;
    a = a + (ch - 48) * b;
  }
  std::cout << std::endl;
  std::cout << "entered number    " << a;

  return 0;
}
