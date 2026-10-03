#include <map>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
map<string, string> m;
int main()
{
    freopen("girdi.txt", "r", stdin);
    string a, b, line;
    while (getline(cin, line) && !line.empty())
    {
        stringstream ss(line);
        if (ss >> a >> b)
            m[b] = a;
    }
    while (cin >> a)
    {
        if (m.find(a) != m.end())
        {
            cout << m[a] << "\n";
        }
        else
            cout << "eh" << "\n";
    }
}
