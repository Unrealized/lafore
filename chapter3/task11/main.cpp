#include <iostream>

using namespace std;

int main()
{
    char point, act, retry;
    int pun1,shi1,pen1,pun2,shi2,pen2,pun3,shi3,pen3,multy,t_pen1,t_pen2,t_pen3;
    do{
    cout <<"Choise operation. -||+||* "<<endl;
    cin >> act;
    if (act == '+' || act == '-'){
    cout << "enter  first amount" << endl;
    cin >> pun1>>point>>shi1>>point>>pen1;
    cout << "enter  second amount" << endl;
    cin >> pun2>>point>>shi2>>point>>pen2;}
    else {
    cout << "enter amount" << endl;
    cin >> pun1>>point>>shi1>>point>>pen1;
    cout << "multiplier" << endl;
    cin >> multy;
    }
    switch (act) {
    case '+':
    t_pen1= pen1+(shi1*12)+(pun1*240) ;
    t_pen2= pen2+(shi2*12)+(pun2*240) ;
    t_pen3= t_pen1+t_pen2;
            pun3=t_pen3/240;
            shi3=t_pen3%240/12;
            pen3=t_pen3%240%12;
        break;
    case '-':
    t_pen1= pen1+(shi1*12)+(pun1*240) ;
    t_pen2= pen2+(shi2*12)+(pun2*240) ;
    t_pen3= t_pen1-t_pen2;
        pun3=t_pen3/240;
        shi3=t_pen3%240/12;
        pen3=t_pen3%240%12;
        break;
    case '*':
    t_pen1= pen1+(shi1*12)+(pun1*240) ;
    t_pen3= t_pen1*multy;
        pun3=t_pen3/240;
        shi3=t_pen3%240/12;
        pen3=t_pen3%240%12;
        break;
    }
    cout <<pun3<<'.'<<shi3<<'.'<<pen3<<endl;
    cout << "Enter y, if you want retry"<<endl;
    cin >> retry;

     }
    while(retry=='y');

 }




