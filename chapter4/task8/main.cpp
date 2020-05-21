#include <iostream>


int main() {

  char fr, ret;
  struct fraction{int top, down;};
  fraction fr1, fr2, fr3, fr4;
 do{
  std::cout << "enter the first fraction!" << std::endl;
  std::cin >>fr1.top>> fr >> fr1.down;
  std::cout << "enter the second fraction!" << std::endl;
  std::cin >>fr2.top>> fr >> fr2.down;
  fr3.top = fr1.top*fr2.down +fr1.down*fr2.top;
  fr3.down = fr1.down*fr2.down;

  for(int fract=fr3.down; fract>0; fract--){
     if (fr3.top%fract==0 && fr3.down%fract==0){
         fr4.top=fr3.top/fract;
         fr4.down=fr3.down/fract;
         fract =0;

}

 }
std::cout << fr1.top<<'/'<<fr1.down<<'+'<< fr2.top<<'/'<<fr2.down<<'='<<fr4.top<< "/" << fr4.down<<std::endl;

std::cout << "if you want retry, input y ";
std::cin >> ret;

}while (ret == 'y'|| ret =='Y');
return 0;
}
//  std::cout << "if you want retry, input y ";
//  std::cin >> ret;
