#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    int a, b, g, d;
    vector<int> v(3);
    v = {0, 1, 2};
    vector<int> c(3);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> g;
        swap(v[a - 1], v[b - 1]);
        c[v[g - 1]]++;
    }
    d = max(c[0], c[1]);
    d = max(d, c[2]);
    cout << d;
}