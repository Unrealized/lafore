#include <iostream>

using namespace std;

int main()
{
char ch;
long totalsec;
struct time{int hourse, minutes , seconds;};
time t1;
cout <<"input time. Use this format hours.minutes.sekonds"<< endl;
cin>>t1.hourse>>ch>>t1.minutes>>ch>>t1.seconds;
totalsec = t1.hourse*3600+t1.minutes*60+t1.seconds;
cout <<totalsec<<" seconds";
return 0;
}
