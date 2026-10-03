#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 2;
    int c = 7;
    b = a + c;
    c = b - 2;
    a = a + a;
    b = b * 2;
    c = c - c;
    cout << a << " " << b << " " << c << endl;
}