#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
    int j, b;
    cin >> j >> b;
    v.push_back(j);
    int a = 0;
    int sum = 0;
    while (true)
    {
        if (a % 2 == 0)
            j = v[0] + pow(2, a);

        else
            j = -pow(2, a) + v[0];
        v.push_back(j);
        cout << v[a] << " " << v[a + 1] << "\n";
        if (v[a] < b && b < v[a + 1])
        {
            sum += abs(v[a] - b);
            break;
        }
        sum += abs(v[a] - v[a + 1]);
        a++;
    }
    cout << sum;
}
