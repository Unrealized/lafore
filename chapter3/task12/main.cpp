#include <iostream>

using namespace std;

int main()
{
    char point, ch, retry,act;
    double a,b,c,d,x;
    do{


    cout << "enter the first fraction" << endl;
    cin >> a>>ch>>b;
    cout <<"Choise operation. -||+||*||/ "<<endl;
    cin >> act;
    cout << "enter the second fraction" << endl;
    cin >> c>>ch>>d;
    switch (act){
    case '-':
    x=(a*d-b*c)/(b*d);
    break;
    case '+':
    x=(a*d+b*c)/(b*d);
    break;
    case '*':
    x=(a*c)/(b*d);
    break;
    case '/':
    x=(a*d)/(b*c);
    break;
    }
    cout << a<<'/'<<b<<act<<c<<'/'<<d<<'='<<x<<endl;
    cout << "Enter y, if you want retry"<<endl;
    cin >> retry;
    }while(retry=='y');
}
