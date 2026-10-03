#include <vector>
#include <iostream>
using namespace std;
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n * k; i++)
    {
        for (int j = 0; j < m * k; j++)
        {
            cout << v[i / k][j / k];
        }
        cout << "\n";
    }
}