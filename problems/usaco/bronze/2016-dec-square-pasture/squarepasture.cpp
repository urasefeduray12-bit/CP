#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;
int main()
{
    freopen("girdi.txt", "r", stdin);
    pair<int, int> a1;
    pair<int, int> a2;
    pair<int, int> b1;
    pair<int, int> b2;
    cin >> a1.first >> a1.second >> a2.first >> a2.second;
    cin >> b1.first >> b1.second >> b2.first >> b2.second;

    int a = max(abs(a1.first - b2.first), abs(b1.first - a2.first));
    int b = max(abs(a1.second - b2.second), abs(b1.second - a2.second));
    int c = max(a, b);
    cout << c * c;
}