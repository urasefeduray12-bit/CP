#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a;
    vector<int> x(n);
    vector<int> y(n);
    long long t = 0;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a = (pow(abs(x[i] - x[j]), 2) + pow(abs(y[i] - y[j]), 2));
            t = max(a, t);
        }
    }
    cout << t;
}
