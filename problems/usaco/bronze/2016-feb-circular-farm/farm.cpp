#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int dis(int a, int b, int n)
{
    return (b - a + n) % n;
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    int t = 0;
    vector<int> v(n);
    vector<int> s(n);
    for (auto &x : v)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t += dis(i, j, n) * v[j];
        }
        s[i] = t;
        t = 0;
    }
    t = 99999999;
    for (auto x : s)
        t = min(x, t);
    cout << t;
}