#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

void balance(priority_queue<long long, vector<long long>, greater<long long>> &min_h, priority_queue<long long> &max_h)
{
    long long t;
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

void cookieadd(priority_queue<long long, vector<long long>, greater<long long>> &min_h, priority_queue<long long> &max_h, long long n)
{
    balance(min_h, max_h);
    if (!min_h.empty() && n < min_h.top())
        max_h.push(n);
    else
        min_h.push(n);
    balance(min_h, max_h);
}

long long cookierem(priority_queue<long long, vector<long long>, greater<long long>> &min_h, priority_queue<long long> &max_h)
{
    balance(min_h, max_h);
    long long t;
    if ((max_h.size() + min_h.size()) % 2 == 0)
    {
        t = min_h.top();
        min_h.pop();
        return t;
    }
    else
    {
        t = max_h.top();
        max_h.pop();
        return t;
    }
    balance(min_h, max_h);
}

int main()
{
    priority_queue<long long, vector<long long>, greater<long long>> min_h;
    priority_queue<long long> max_h;
    freopen("girdi.txt", "r", stdin);
    char a;
    long long b;
    while (cin >> a)
    {
        if (a == '#')
        {
            cout << cookierem(min_h, max_h) << "\n";
        }
        else
        {
            b = a - '0';
            cookieadd(min_h, max_h, b);
        }
    }
    return 0;
}