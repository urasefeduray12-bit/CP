#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("girdi.txt", "r", stdin);
    int T;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        int a = 0;
        int cs = 0;
        int ec = 0;
        int numcs, numec;
        cin >> numcs >> numec;
        vector<int> csiq(numcs);
        vector<int> eciq(numec);
        for (int i = 0; i < numcs; i++)
            cin >> csiq[i];
        for (int i = 0; i < numec; i++)
            cin >> eciq[i];
        for (int i = 0; i < numcs; i++)
            cs += csiq[i];
        for (int i = 0; i < numec; i++)
            ec += eciq[i];
        ec = ec / numec;
        cs = cs / numcs;
        for (int i = 0; i < numcs; i++)
            if (ec < csiq[i] && cs > csiq[i])
            {
                a += 1;
            }
        cout << a;
    }
}