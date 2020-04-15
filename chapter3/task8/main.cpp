#include <conio.h>
#include <iostream>
#include <cmath>
#include <vector>

int main() {
    char pun,shi,pen;
    int pun1=0,shi1,pen1,pun2,shi2,pen2;
    std::vector<int> numbers;
    std::cout<<"enter first amount: ";
    do
    {pun = getche();
        if (pun!='.')
            numbers.push_back(pun);}
    while (pun!='.');
    for (unsigned int i=0 ; i<=numbers.size()-1; ++i)
        pun1 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));

std::cout<<std::endl <<pun1 ;
    return 0;
}
