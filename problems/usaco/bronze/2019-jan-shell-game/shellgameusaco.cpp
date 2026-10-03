#include <iostream>
using namespace std;
int a[100], b[100], g[100];

int correctguess(int starting_shell, int N)
{
    int currs = starting_shell;
    int correct = 0;
    for (int i = 0; i < N; i++)
    {
        if (currs == a[i])
            currs = b[i];
        else if (currs == b[i])
            currs = a[i];
        if (g[i] == currs)
            correct++;
    }
    return correct;
}

int main()
{
    freopen("girdi.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> g[i];
    }
    int best = 0;
    for (int i = 1; i <= 3; i++)
    {
        best = max(best, correctguess(i, n));
    }
    cout << best;
}