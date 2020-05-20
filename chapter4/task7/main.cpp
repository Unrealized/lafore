#include <iostream>
#include <iomanip>
char ch,  retry;
using namespace std;

int main()
{

enum etype{laborer,secretary,manager,accountant,executive,researcher};
struct date{int month,day,year;};
struct employee{int number;float money;date time; etype prof;};
const int amountofWorker=3;
employee worker[amountofWorker] = {};
string nameProfe[amountofWorker] ={};

for (int i=0; i<amountofWorker; i++)
{
cout << "enter employee number ";
cin >> worker[i].number;


do{
cout << "Enter the first letter of one of the listed professions:" <<endl<< "laborer,secretary,manager,accountant,executive,researcher  ";
    cin>>ch;
    switch (ch) {
    case 'l':
    case 'L':
         worker[i].prof = laborer;
         nameProfe[i] = "laborer";
        break;
    case 's':
    case 'S':
         worker[i].prof = secretary;
         nameProfe[i] = "secretary";
        break;
    case 'm':
    case 'M':
         worker[i].prof = manager;
         nameProfe[i] = "manager";
        break;
    case 'a':
    case 'A':
         worker[i].prof = accountant;
         nameProfe[i] = "accountant";
        break;
    case 'e':
    case 'E':
         worker[i].prof = executive;
         nameProfe[i] = "executive";
        break;
    case 'r':
    case 'R':
         worker[i].prof = researcher;
         nameProfe[i] = "researcher";
        break;
    default:
        cout<<"INPUT ERROR! If you want try input first letter of one of the listed professions  now enter y"<<endl;
        cin >> retry;
        if(retry!='y'&&retry!='Y') return (0);

    }
        }while(retry=='y'||retry=='Y');
cout << "enter employee salary ";
cin >> worker[i].money;
cout << "enter employment date. use the following data entry format day.month.year ";
cin >>worker[i].time.day>>ch>>worker[i].time.month>>ch>> worker[i].time.year;
//cout << worker[i].time.year<<' '<<worker[i].time.month<<' '<<worker[i].time.day;
}
cout <<left <<setw(8)<<"number"<<setw(12)<<"proffesion"<<setw(10)<<"salary"<<setw(12)<<"emloy_date"<<endl;
for (int i=0; i<amountofWorker; i++){
cout  <<left <<setw(8)<<worker[i].number<<setw(12)<<nameProfe[i]<<setw(10)<<worker[i].money<<worker[i].time.day<<'.'<<worker[i].time.month<<'.'<<worker[i].time.year<<endl;
}

    return 0;
}
