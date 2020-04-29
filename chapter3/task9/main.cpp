#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int guest, place, comb=1,x;
    cout << "enter number of guests" << endl;
    cin >> guest;
    cout << "enter number of places" << endl;
    cin >> place;
if (guest>=place)
    for (int i=guest; i>guest-place; i--)
comb*=i;
else
for(int i = place; i>place-guest; i--)
    comb*=i;

    cout << "quantity combination = " << comb;
    return 0;
}
