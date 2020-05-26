#include <iostream>

using namespace std;
struct Distance{int feet; float inches;};
void comprasion(Distance, Distance);

int main()
{
Distance d1,d2;
    char ch;
    cout << "enter first distance. Use this format feet-inches"<< endl;
    cin>>d1.feet>>ch>>d1.inches;
    cout << "enter second distance. Use this format feet-inches"<< endl;
    cin>>d2.feet>>ch>>d2.inches;
    comprasion(d1,d2);
}
void comprasion(Distance di1, Distance di2)
{
   if ((di1.feet+(di1.inches/12))>(di2.feet+(di2.inches/12)))
   cout<<"greatest distance "<<di1.feet<<'\''<<di1.inches<<'\"';
   if ((di2.feet+(di2.inches/12))>(di1.feet+(di1.inches/12)))
   cout<<"greatest distance "<<di2.feet<<'\''<<di2.inches<<'\"';
}
