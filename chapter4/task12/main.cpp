#include <iostream>

using namespace std;

int main()
{
    char  ch, retry,act;
    struct fraction{int top,down;};
    fraction fr1, fr2, fr3,fr4;
    do{


    cout << "enter the first fraction" << endl;
    //cin >> a>>ch>>b;
    cin>>fr1.top>>ch>>fr1.down;
    cout <<"Choise operation. - + * / "<<endl;
    cin >> act;
    cout << "enter the second fraction" << endl;
    //cin >> c>>ch>>d;
    cin>>fr2.top>>ch>>fr2.down;
    switch (act){
    case '-':
    fr3.top=(fr1.top*fr2.down-fr1.down*fr2.top);
    fr3.down=(fr1.down*fr2.down);
    break;
    case '+':
    fr3.top=(fr1.top*fr2.down+fr1.down*fr2.top);
    fr3.down=(fr1.down*fr2.down);
    break;
    case '*':
    fr3.top=(fr1.top*fr2.top);
    fr3.down=(fr1.down*fr2.down);
    break;
    case '/':
    fr3.top=(fr1.top*fr2.down);
    fr3.down=(fr1.down*fr2.top);
    break;
    }
    for(int fract=fr3.down; fract>0; fract--){          //
       if (fr3.top%fract==0 && fr3.down%fract==0){      //
           fr4.top=fr3.top/fract;                       //
           fr4.down=fr3.down/fract;                     // Сокращение дробей
           fract =0;                                    //
                                                        //
  }                                                     //

   }

    cout << fr1.top<<'/'<<fr1.down<<act<<fr2.top<<'/'<<fr2.down<<'='<<fr4.top<<'/'<<fr4.down<<endl;
    cout << "Enter y, if you want retry"<<endl;
    cin >> retry;
    }while(retry=='y');
}
