#include <iostream>
#include <algorithm>
using namespace std;
void pour(int &a, int &b, int amax, int bmax)
{
    int amt = min(a, bmax - b);
    a -= amt;
    b += amt;
}

int main()
{
    freopen("girdi.txt", "r", stdin);
    int a, amax;
    int b, bmax;
    int c, cmax;
    cin >> amax >> a;
    cin >> bmax >> b;
    cin >> cmax >> c;
    for (int i = 0; i < 99; i++)
    {
        pour(a, b, amax, bmax);
        pour(b, c, bmax, cmax);
        pour(c, a, cmax, amax);
    }
    pour(a, b, amax, bmax);
    cout << a << "\n"
         << b << "\n"
         << c;
}
