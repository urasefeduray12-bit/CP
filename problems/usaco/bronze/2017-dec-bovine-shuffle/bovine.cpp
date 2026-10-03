#include <iostream>
#include <vector>
using namespace std;
vector<int> bovine(vector<int> v, vector<int> last, int n)
{
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        t[i] = last[v[i] - 1];
    }
    return t;
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    vector<int> cow(n);
    vector<int> shuff(n);
    for (int i = 0; i < n; i++)
        cin >> shuff[i];
    for (int i = 0; i < n; i++)
        cin >> cow[i];
    cow = bovine(shuff, cow, n);
    cow = bovine(shuff, cow, n);
    cow = bovine(shuff, cow, n);
    for (int i = 0; i < n; i++)
    {
        cout << cow[i] << "\n";
    }
}