#include <iostream>

using namespace std;

int main()
{
   char sep;
    struct phone
   {
   int citycode, station, abonent;
   };
   phone p1;
   phone p2;
   p1.citycode = 212;
   p1.station = 767;
   p1.abonent = 8900;
   cout << "Enter city code, station number, abonent number. Use a '.' as a separator"<<endl;
   cin >> p2.citycode >>sep>>p2.station>>sep>>p2.abonent;
   cout << "my number ("<<p1.citycode<<") "<<p1.station<<'-'<<p1.abonent<<endl;
   cout << "you number ("<<p2.citycode<<") "<<p2.station<<'-'<<p2.abonent<<endl;
    return 0;
}
