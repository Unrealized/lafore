#include <iostream>

using namespace std;
void zeroSmaller(int&,int&);
int main()
{
    int a,b;
    cout <<"a = ";cin>>a;
    cout <<"b = ";cin>>b;

     zeroSmaller(a,b);
    cout<<"if (a > b) b = 0. if (a<b) a=0. it is true?"<<endl;
    cout<<"a = "<<a<<", b = "<<b;
    return 0;
}
void zeroSmaller(int& a,int& b){
    if (a>b)
        b=0;
    if (a<b)
        a=0;
    }
