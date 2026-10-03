#include <iostream>
#include <vector>
using namespace std;
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> v(n, vector<char>(m, 0));
    vector<vector<char>> n1(n * k, vector<char>(m, 0));
    vector<vector<char>> n2(n * k, vector<char>(m * k, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int l = 1; l <= k; l++)
            {
                n1[(i + 1) * k - l][j] = v[i][j];
            }
        }
    }
    for (int i = 0; i < n * k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int l = 1; l <= k; l++)
            {
                n2[i][(j + 1) * k - l] = n1[i][j];
            }
        }
    }
    for (int i = 0; i < n * k; i++)
    {
        for (int j = 0; j < m * k; j++)
        {
            cout << n2[i][j];
        }
        cout << endl;
    }
}