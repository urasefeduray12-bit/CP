#include <iostream>

using namespace std;
double calc(double e, double h, double p)
{
    return e * h * p / 100000;
}
int main()
{
    int h, p;
    cin >> h >> p;
    int x = 1;
    int bulb = ((x * h + 999) / 1000) * 5;
    double inc_val = calc(60, h, p) + bulb;
    double low_val = calc(11, h, p) + 60;
    while (true)
    {
        if (low_val < inc_val)
            break;
        x++;
        bulb = ((x * h + 999) / 1000) * 5;
        inc_val = calc(60, x * h, p) + bulb;
        low_val = calc(11, x * h, p) + 60;
    }
    cout << x;
}