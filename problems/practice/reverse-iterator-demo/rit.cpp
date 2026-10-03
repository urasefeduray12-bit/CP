#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v(5);
    v = {5, 4, 3, 2, 1};
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
}