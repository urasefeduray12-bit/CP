#include "vectorfunctions.h"
#include <vector>
using namespace std;
// Reverse a vector.
// Note that it is sent as a reference, so you should
// reverse the same vector that was sent in.
void backwards(vector<int> &vec)
{
    int size = vec.size();
    int t;
    for (int i = 0; i < size / 2; i++)
    {
        t = vec[i];
        vec[i] = vec[size - i - 1];
        vec[size - i - 1] = t;
    }
}

// Return every other element of the vector, starting with the first.
// You should return a new vector with the answer.
// You are not allowed to modify the vector, even though it is
// sent as a reference. Therefore, the parameter is declared "const".
vector<int> everyOther(const vector<int> &vec)
{
    int n = vec.size();
    vector<int> v;
    for (int i = 0; i < n; i += 2)
    {
        v.push_back(vec[i]);
    }
    return v;
}

// Return the smallest value of a vector.
int smallest(const vector<int> &vec)
{
    int sm = 0;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] < vec[sm])
            sm = i;
    }
    return vec[sm];
}

// Return the sum of the elements in the vector.
int sum(const vector<int> &vec)
{
    int s = 0;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        s += vec[i];
    }
    return s;
}

// Return the number of odd integers, that are also on an
// odd index (with the first index being 0).
int veryOdd(const vector<int> &vec)
{
    int n = vec.size();
    int o = 0;

    for (int i = 1; i < n; i += 2)
    {
        if (vec[i] % 2 == 1)
            o++;
    }
    return o;
}