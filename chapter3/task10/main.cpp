#include <iostream>

using namespace std;

int main()
{
    float in_con,rate,sum=0,am_req;
    int years=0;
    char retry;
 do{
  cout << "initial contribution=";
  cin >> in_con;
  cout << "interest rate=";
  cin >> rate;
  cout << "amount required=";
  cin >> am_req;
  sum=in_con;
while(sum<am_req){
   years++;
   sum=sum+(sum*rate/100);
}
cout <<"need "<<years<<" years"<<endl;
do{
cout <<"retry ? y/n ";
cin >>retry;}
while (retry!='y'&&retry!='n');}
while (retry=='y');


}

