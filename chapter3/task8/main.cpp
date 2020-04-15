#include <conio.h>
#include <iostream>
#include <cmath>
#include <vector>

int main() {
char pun,shi,pen,choice;
bool run = true;

while(run){
std::vector<int> numbers;
int pun1=0,shi1=0,pen1=0,pun2=0,shi2=0,pen2=0,pun3,shi3,pen3;

    std::cout<<"enter first amount: J";
    do
    {pun = getche();
        if (pun=='1'||pun=='2'||pun=='3'||pun=='4'||pun=='5'||pun=='6'||pun=='7'||pun=='8'||pun=='9'||pun=='0'||pun=='.'){
            if(pun=='.'){
                break;}
            numbers.push_back(pun);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter first amount: j";
            numbers.clear();

        }
    }

    while (pun!='.');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        pun1 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();
    do
    {shi = getche();
        if (shi=='1'||shi=='2'||shi=='3'||shi=='4'||shi=='5'||shi=='6'||shi=='7'||shi=='8'||shi=='9'||shi=='0'||shi=='.'){
            if(shi=='.'){
                break;}
            numbers.push_back(shi);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter first amount: J"<<pun1<<'.';
            numbers.clear();
        }
    }

    while (shi!='.');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        shi1 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();
    do
    {pen = getche();
        if (pen=='1'||pen=='2'||pen=='3'||pen=='4'||pen=='5'||pen=='6'||pen=='7'||pen=='8'||pen=='9'||pen=='0'||pen=='\r'){
            if(pen=='\r'){
                break;}
            numbers.push_back(pen);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter first amount: J"<<pun1<<'.'<<shi1<<'.';
            numbers.clear();
        }
    }

    while (pen!='\r');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        pen1 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();




    //

    std::cout<<std::endl;
    std::cout<<"enter second amount: J";
    do
    {pun = getche();
        if (pun=='1'||pun=='2'||pun=='3'||pun=='4'||pun=='5'||pun=='6'||pun=='7'||pun=='8'||pun=='9'||pun=='0'||pun=='.'){
            if(pun=='.'){
                break;}
            numbers.push_back(pun);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter second  amount: J";
            numbers.clear();
        }
    }

    while (pun!='.');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        pun2 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();
    do
    {shi = getche();
        if (shi=='1'||shi=='2'||shi=='3'||shi=='4'||shi=='5'||shi=='6'||shi=='7'||shi=='8'||shi=='9'||shi=='0'||shi=='.'){
            if(shi=='.'){
                break;}
            numbers.push_back(shi);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter second  amount: J"<<pun2<<'.';
            numbers.clear();
        }
    }

    while (shi!='.');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        shi2 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();
    do
    {pen = getche();
        if (pen=='1'||pen=='2'||pen=='3'||pen=='4'||pen=='5'||pen=='6'||pen=='7'||pen=='8'||pen=='9'||pen=='0'||pen=='\r'){
            if(pen=='\r'){
                break;}
            numbers.push_back(pen);
        }
        else{
            std::cout<<std::endl;
            std::cout<<"enter second  amount: J"<<pun2<<'.'<<shi2<<'.';
            numbers.clear();
        }
    }

    while (pen!='\r');
    for (unsigned int i=0 ; i<numbers.size(); ++i)
        pen2 +=(numbers[i]-48)*(std::pow(10,numbers.size()-1-i));
    numbers.clear();


   pen3=(pen1+pen2)%12;
   shi3=(pen1+pen2)/12+(shi1+shi2)%20;
   pun3=pun1+pun2+(shi1+shi2)/20+(pen1+pen2)/240;


    std::cout<<std::endl;
    std::cout<<"total sum J"<<pun3<<'.'<<shi3<<'.'<<pen3;


    do{
        std::cout<<std::endl<<"retry  (y/n)? ";
        std::cin>>choice;
               choice = tolower(choice);
           }while (choice != 'n' && choice != 'y');
           if(choice =='n'){
               run = false;
           }
       }
   return 0;
   }
