#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
unsigned int x;


    do{
    std::cout << "inter the number" << std::endl;
    std::cin >>x;
    unsigned long long fact=1;
    for(unsigned int i=x;i!=0;i--)
    fact *=i;
    if(x!=0)
    std::cout<<"factorial "<<x<<"="<<fact<<std::endl;}
    while (x!=0);

return 0;
}


