#include <iostream>

using namespace std;

int main()
{
float vol,len,wid,hei;
char ch;
    struct Distance
    {
        int feet;
        float inches;
    };

    struct Volume
    {
        Distance lenght;
        Distance width;
        Distance heigth;
    };

    Volume v1;
    cout <<"enter length in format  feet-inches"<<endl<<"length = ";
    cin >>v1.lenght.feet>>ch>>v1.lenght.inches;
    cout <<"enter width in format  feet-inches"<<endl<<"width = ";
    cin >>v1.width.feet>>ch>>v1.width.inches;
    cout <<"enter heigth in format  feet-inches"<<endl<<"heigth = ";
    cin >>v1.heigth.feet>>ch>>v1.heigth.inches;
len = v1.lenght.feet+v1.lenght.inches/12;
wid = v1.width.feet+v1.width.inches/12;
hei = v1.heigth.feet+v1.heigth.inches/12;
vol = len*wid*hei;
    cout <<"volume = "<<vol<< '\''
    return 0;
}
