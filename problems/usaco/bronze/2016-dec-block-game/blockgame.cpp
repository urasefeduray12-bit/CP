#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <array>
using namespace std;

array<int, 26> say(const string &a)
{
    array<int, 26> cnt = {0};
    for (char c : a)
        cnt[c - 'a']++;
    return cnt;
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    array<int, 26> v = {0};
    array<int, 26> ta = {0};
    array<int, 26> tb = {0};
    int n;
    cin >> n;
    vector<pair<string, string>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        ta = say(vp[i].first);
        tb = say(vp[i].second);
        for (int j = 0; j < 26; j++)
        {
            v[j] += max(ta[j], tb[j]);
        }
        ta = {0};
        tb = {0};
    }
    for (int i = 0; i < 26; i++)
    {
        cout << v[i] << "\n";
    }
}