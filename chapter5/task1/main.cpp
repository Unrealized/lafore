#include <iostream>

using namespace std;
float  circarea(float);

int main()

{
    float radius;

    cout << "circle radius = " ;
    cin >> radius;
    cout<<"area of a circle = "<<circarea(radius);
    return 0;
}
float circarea (float rad)
{
    float PI = 3.14159F;
    float area = PI*rad*rad;
    return area;

}
