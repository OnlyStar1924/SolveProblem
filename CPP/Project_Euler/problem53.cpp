#include <iostream>

using namespace std;

// phep nCr trong toan
int binomial(int n, int r)
{

    int nt = 1;
    for (int i = 0; i < min(r, (n - r)); i++)
    {
        nt = nt * (n - i) / (i + 1);
    }
    return nt;
}

int main()
{
    int L = 1000000;
    int maxn = 100;
    int c = 0;

    for (int n = 23; n <= maxn; n++)
    {
        for (int r = 2; r < n / 2; r++)
        {
            if (binomial(n, r) > L)
            {
                c += n - 2 * r + 1;
                break;
            }
        }
    }

    cout << c << endl;

    return 0;
}
