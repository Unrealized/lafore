#include <iostream>

using namespace std;

int main()
{

    double NewPounds;
    struct sterling{int pounds, shillings, pence;};
    sterling st1;
    cout << "input amount of pounds ";
    cin >> NewPounds;
    st1.pence = NewPounds*240;
    st1.shillings= st1.pence/12;
    st1.pence= st1.pence%12;
    st1.pounds=st1.shillings/20;
    st1.shillings=st1.shillings%20;
    cout <<'J'<< st1.pounds<<'.'<<st1.shillings<<'.'<<st1.pence;

    return 0;
}
