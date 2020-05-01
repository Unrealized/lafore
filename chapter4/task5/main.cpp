#include <iostream>

using namespace std;

int main()
{
    char ch;
    struct date{int month,day,year;};
    date d1;
    cout<<"enter date information. Use this format day/month/year"<<endl;
    do{
    cin>>d1.day>>ch>>d1.month>>ch>>d1.year;
    if(ch != '/'|| d1.day >31||d1.month >12){
    cout<<"error input format. if you want try input now, enter 'y'"<<endl;
    cin>>ch;}
    else
   cout<<d1.day<<ch<<d1.month<<ch<<d1.year;
    }while(ch=='y');



    return 0;
}
