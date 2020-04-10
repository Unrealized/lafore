#include <iostream>

using namespace std;

int main(){

int gap =20;
int sym = 1;

{
  for (int i = 20; i>=1; i--)
  {gap=gap-1;
  for ( int i =gap; i>=0; i--)
  std::cout <<' ';
  for (int i =sym; i>=1; i--)
  std::cout <<"X";
  sym=sym+2;
  std::cout <<std::endl;}


}
 return 0;
}

