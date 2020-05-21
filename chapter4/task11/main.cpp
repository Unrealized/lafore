#include <iostream>

using namespace std;

int main()
{
    char ch;
    long firsec, secsec, totalsec;
    struct time{int hourse, minutes , seconds;};
    time t1, t2, t3;
    cout <<"input first time. Use this format hours:minutes:seconds"<< endl;
    cin>>t1.hourse>>ch>>t1.minutes>>ch>>t1.seconds;
    cout <<"input second time. Use this format hours:minutes:seconds"<< endl;
    cin>>t2.hourse>>ch>>t2.minutes>>ch>>t2.seconds;
    firsec = t1.hourse*3600+t1.minutes*60+t1.seconds;
    secsec = t2.hourse*3600+t2.minutes*60+t2.seconds;
    totalsec=firsec+secsec;
    t3.hourse=totalsec/3600%24;
    t3.minutes=totalsec%3600%60;
    t3.seconds=totalsec%3600%60%60;
    cout<<t3.hourse<<':'<<t3.minutes<<':'<<t3.seconds;

    return 0;
}
