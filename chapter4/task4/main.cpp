#include <iostream>

using namespace std;

int main()
{
struct employee{int number;float money;};
employee emp1,emp2,emp3;
char ch;
cout << "Enter  information for 1 employee. Number and Input format number-allowance "<<endl;
cin >> emp1.number>>ch>>emp1.money;
cout << "Enter  information for 2 employee. Number and Input format number-allowance "<<endl;
cin >> emp2.number>>ch>>emp2.money;
cout << "Enter  information for 3 employee. Number and Input format number-allowance "<<endl;
cin >> emp3.number>>ch>>emp3.money;
cout << "information for all employees"<<endl;
cout <<"number = "<<emp1.number<<" allowance = "<<emp1.money<<"$" <<endl;
cout <<"number = "<<emp2.number<<" allowance = "<<emp2.money<<"$" <<endl;
cout <<"number = "<<emp3.number<<" allowance = "<<emp3.money<<"$" <<endl;
return 0;
}
