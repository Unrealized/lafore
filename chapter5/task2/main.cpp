#include <iostream>

using namespace std;
double power(double num, int pow);
int main()
{
    double number;
    int p;
    cout << "number = "; cin>>number;
    cout<<"power = "; cin>>p;
    cout<<number<<'^'<<p<<" = "<<power(number,p);


    return 0;
}

double power(double num, int pow)
{
    double result =1;

    for(int i=pow;i>=1; i--)
        result=result*num;
    return result;

}

