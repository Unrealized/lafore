#include <iostream>

//Создайте структуру с именем Volume, содержащую три поля типа Distance
//из примера englstrc, для хранения трех измерений помещения. Определите
//переменную типа Volume, инициализируйте ее, вычислите объем, занимаемый
//помещением, и выведите результат на экран. Для подсчета объема переведите
//каждое из значений типа Distance в значение типа float, равное
// соответствующей длине в футах и хранимое в отдельной переменной. Затем для
// вычисления объема следует перемножить три полученные вещественные переменные.

struct Distance  // длина в английской системе
{
  int feet;
  float inches;
};

struct Volume {
  Distance d1;
  Distance d2;
  Distance d3;
};

int main() {
  Volume vol = {{2, 3}, {2, 3}, {8, 5}};

  auto volume = (vol.d1.feet + (vol.d1.inches / 12.0f)) *
                (vol.d2.feet + (vol.d2.inches / 12.0f)) *
                (vol.d3.feet + (vol.d3.inches / 12.0f));

  std::cout << "Volume = " << volume;

  return 0;
}
