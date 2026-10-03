#include <iostream>
#include <vector>

using namespace std;

void printmat(vector<vector<int>> m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n"
         << "\n";
}
vector<vector<int>> A(vector<vector<int>> m, int r, int c, int n)
{
    int x, y = 0;
    vector<vector<int>> mat(n - 1, vector<int>(n - 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == r || j == c)
                continue;
            mat[x][y] = m[i][j];
            y++;
        }
        y = 0;
        x++;
    }
    printmat(mat, n - 1);

    return mat;
}
long long permcal(vector<vector<int>> m, int n)
{
    int r = 1;
    long long perm = 0;
    if (n == 1)
        return m[0][0];
    else
    {
        for (int j = 1; j <= n; j++)
        {
            perm += m[r][j] * permcal(A(m, r, j, n), n - 1);
        }
        return perm;
    }
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    long long perm = permcal(m, n);
    cout << perm << endl;
}