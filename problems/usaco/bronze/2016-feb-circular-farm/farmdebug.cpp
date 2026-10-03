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

    for (int j = 0; j < n; j++)
    {
        s[j] = dis(1, j, n) * v[j];
    }
    for (auto x : s)
        cout << x << "\n";
}