#include <iostream>

using namespace std;

int main()
{
    float ini;
    int yea;
    float rat;
    float sum;

    cout << "initial contribution=";
    cin >> ini;
    cout << "number of years=";
    cin >> yea;
    cout << "interest rate=";
    cin >> rat;
    for(int i=yea;i!=0;i--)
        sum=ini=ini+(ini*(rat/100));
    cout << "in " << yea <<" years you will receive " << sum<<'$';


    return 0;
}
