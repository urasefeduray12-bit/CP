#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int ct = 0;
    vector<int> bessp(m), besds(m), bes(100);
    vector<int> polsp(n), polds(n), pol(100);
    auto besstart = bes.begin();
    auto polstart = pol.begin();
    for (int i = 0; i < n; i++)
    {
        fill(polstart, polstart + polds[i] - 1, polsp[i]);
        polstart = polstart + polds[i];
    }
    for (int i = 0; i < m; i++)
    {
        fill(besstart, besstart + besds[i] - 1, bessp[i]);
        besstart = besstart + besds[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if (bes[i] > pol[i])
            ct++;
    }
    cout << ct;
}