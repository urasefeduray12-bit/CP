#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;
pair<int, int> onramp(pair<int, int> rang, pair<int, int> on)
{
    pair<int, int> t;
    t.first = rang.first + on.first;
    t.second = rang.second + on.second;
    return t;
}
pair<int, int> offramp(pair<int, int> rang, pair<int, int> off)
{
    pair<int, int> t;
    t.first = max(0, rang.first - off.second);
    t.second = max(0, rang.second - off.first);
    return t;
}
pair<int, int> nonef(pair<int, int> rang1, pair<int, int> rang2)
{
    pair<int, int> t;
    t.first = max(rang1.first, rang2.first);
    t.second = min(rang1.second, rang2.second);
    return t;
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    vector<string> s(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> v[i].first >> v[i].second;
    }
    pair<int, int> a;
    a = {-999999, 999999};

    for (int i = n - 1; i > -1; i--)
    {
        if (s[i] == "none")
            a = nonef(a, v[i]);
        else if (s[i] == "on")
            a = offramp(a, v[i]);
        else if (s[i] == "off")
            a = onramp(a, v[i]);
    }
    cout << a.first << " " << a.second << "\n";
    a = {-99999999, 99999999};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "none")
            a = nonef(a, v[i]);
        else if (s[i] == "on")
            a = onramp(a, v[i]);
        else if (s[i] == "off")
            a = offramp(a, v[i]);
    }
    cout << a.first << " " << a.second;
}