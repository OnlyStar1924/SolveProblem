#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    //Farey Sequences
    int limit = 12000;
    int a = 1;
    int b = 3;
    int c = 4000;
    int d = 11999;

    int result = 0;

    while (!(c == 1 && d == 2))
    {
        result++;
        int k = (limit + b) / d;
        int e = k * c - a;
        int f = k * d - b;
        a = c;
        b = d;
        c = e;
        d = f;
    }

    cout<<result;
    return 0;
}
