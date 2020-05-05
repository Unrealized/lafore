#include <iostream>

using namespace std;

int main()
{
    char ch,retry;
    enum etype {laborer,secretary,manager,accountant,executive,researcher};
    etype word;
do{
    cout<<"enter the first letter of the employee position"<<endl;
    cin>>ch;
    switch (ch) {
    case 'l':
    case 'L':
        word = etype::laborer;
        break;
    case 's':
    case 'S':
        word = etype::secretary;
        break;
    case 'm':
    case 'M':
        word = etype::manager;
        break;
    case 'a':
    case 'A':
        word = etype::accountant;
        break;
    case 'e':
    case 'E':
        word = etype::executive;
        break;
    case 'r':
    case 'R':
        word = etype::researcher;
        break;
    default:
        cout<<"ERROR! If you want try now enter y"<<endl;
        cin >> retry;
        if(retry!='y'&&retry!='Y') return (0);

    }
    }while(retry=='y'||retry=='Y');
    switch (word) {
    case etype::laborer:
        cout << "full title employee: laborer";
        break;
    case etype::secretary:
        cout << "full title employee: secretary";
        break;
    case etype::manager:
        cout << "full title employee: manager";
        break;
    case etype::accountant:
        cout << "full title employee: accountant";
        break;
    case etype::executive:
        cout << "full title employee: executive";
        break;
    case etype::researcher:
        cout << "full title employee: researcher";
        break;
    }

    return 0;
}
