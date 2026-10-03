#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

void balance(priority_queue<int, vector<int>, greater<int>> &min_h, priority_queue<int> &max_h)
{

    int t;

    if (min_h.size() + 1 < max_h.size() || max_h.size() + 1 < min_h.size())
    {

        if (min_h.size() > max_h.size())
        {

            t = min_h.top();

            min_h.pop();

            max_h.push(t);
        }

        else
        {

            t = max_h.top();

            max_h.pop();

            min_h.push(t);
        }
    }
}

void cookieadd(priority_queue<int, vector<int>, greater<int>> &min_h, priority_queue<int> &max_h, int n)
{

    balance(min_h, max_h);

    if (n > min_h.top())
        max_h.push(n);

    else
        min_h.push(n);

    balance(min_h, max_h);
}

int cookierem(priority_queue<int, vector<int>, greater<int>> &min_h, priority_queue<int> &max_h)
{

    int t;

    if ((max_h.size() + min_h.size()) % 2 == 0)
    {

        t = max_h.top();

        max_h.pop();

        return t;
    }

    else
    {

        t = min_h.top();

        min_h.pop();

        return t;
    }
}

int main()
{

    priority_queue<int, vector<int>, greater<int>> min_h;

    priority_queue<int> max_h;

    char a;

    int b;

    while (cin >> a)
    {

        if (a == '#')
        {

            cout << cookierem(min_h, max_h);
        }

        else
        {

            b = a - '0';

            cookieadd(min_h, max_h, b);
        }
    }
}