#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    freopen("sample-input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int ct = 0;
    vector<int> bessp(m), besds(m);
    vector<int> polsp(n), polds(n);
    for (int i = 0; i < n; i++)
    {
        cin >> polds[i] >> polsp[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> besds[i] >> bessp[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (bessp[j] > polsp[i])
            ct = max(ct, bessp[j] - polsp[i]);
        if (polds[i] > besds[j])
            j++;
        else if (polds[i] < besds[j])
            i++;
        else
        {
            i++;
            j++;
        }
    }
    cout << ct;
}