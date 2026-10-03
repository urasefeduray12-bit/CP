#include <vector>
#include <string>
#include <iostream>
#include <utility>
using namespace std;

void app(vector<pair<int, int>> &v, char s, int p, int &t)
{
    if (s == 'W')
    {
        v[t + 1] = make_pair(v[t].first - p, v[t].second);
    }

    else if (s == 'E')
    {
        v[t + 1] = make_pair(v[t].first + p, v[t].second);
    }
    else if (s == 'S')
    {
        v[t + 1] = make_pair(v[t].first, v[t].second - p);
    }
    else if (s == 'N')
    {
        v[t + 1] = make_pair(v[t].first, v[t].second + p);
    }
    t += p;
}
int search(vector<pair<int, int>> v, pair<int, int> p)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == p)
            return i;
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int t = 0;
    vector<pair<int, int>> v(n + 1);
    v[0] = make_pair(0, 0);
    for (int i = 0; i < n)
}