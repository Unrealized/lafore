#include <conio.h>

#include <iostream>
int main() {
  long a;
  long b;
  long c;
  char ch;
  char next = 'y';
  while (next == 'y'){
  std::cout << "enter the first operand, operation and second operand "<<std::endl;
  std::cin >> a ;
  std::cout << "first operand " << a<<std::endl;
  std::cin >> ch ;
  std::cout << "operation is a  " << ch<<std::endl;
  std::cin >> b ;
  std::cout << "second operand " << b<<std::endl;
  switch (ch) {
      case '+':c=a+b;break;
      case '-':c=a-b;break;
      case '/':c=a/b;break;
      case '*':c=a*b;break;
  }
  std::cout <<c<<std::endl;
  std::cout << "perform another operation? y/n"<<std::endl;
  std::cin >> next;
  //if (next = 'n") return 0;



  }
  return 0;
}
