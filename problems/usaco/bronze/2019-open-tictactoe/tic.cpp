#include <vector>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int count(vector<char> v)
{
    int ct = 3;
    if (v[0] == v[1])
        ct--;
    else if (v[1] == v[2])
        ct--;
    else if (v[0] == v[2])
        ct--;
    return ct;
}
int team = 0;
int ind = 0;
void check(vector<char> &a)
{
    int b = count(a);
    if (b == 1)
        ind++;
    else if (b == 2)
        team++;
}
int main()
{
    freopen("girdi.txt", "r", stdin);
    vector<string> v(3);
    vector<char> a(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[j] = v[i][j];
        }
        check(a);
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            a[i] = v[i][j];
        }
        check(a);
    }
    int j = 0;

    for (int i = 0; i < 3; i++)
    {

        a[j] = v[i][j];
        j++;
    }
    check(a);
    j = 0;
    for (int i = 2; i > -1; i--)
    {

        a[j] = v[i][j];
        j++;
    }
    check(a);

    cout << ind << "\n"
         << team;
}