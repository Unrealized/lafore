#include <iostream>

using namespace std;

int main()
{
struct point {int x,y;};
point p1,p2,p3;
char sep;
cout <<"enter cordinate point p1.Use a '.' as a separator"<<endl<<"p1 = ";
cin >>p1.x>>sep>>p1.y;
cout <<"enter cordinate point p2.Use a '.' as a separator"<<endl<<"p2 = ";
cin >>p2.x>>sep>>p2.y;
p3.x=p1.x+p2.x;
p3.y=p1.y+p2.y;
cout <<"cordinate point p1+p2 = "<<p3.x<<'.'<<p3.y;

    return 0;
}
