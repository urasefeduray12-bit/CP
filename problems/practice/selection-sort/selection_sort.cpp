#include <iostream>

using namespace std;
void selection_sort(int *a, int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {
        int ind = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[ind])
            {
                ind = j;
            }
        }
        t = a[i];
        a[i] = a[ind];
        a[ind] = t;
    }
}

int main()
{
    int b[5] = {3, 5, 6, 4, 7};
    selection_sort(b, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << "\n";
    }
    cout << endl;
}