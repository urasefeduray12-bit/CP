#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int d = 0;
    cin >> N;
    bool state = false;
    string arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < N; j++)
    {
        if (state == true && arr[j] == "drunk" || state == true)
            state = false;
        if (arr[j] == "drunk")
        {
            state = true;
            d += 1;
        }
    }
}