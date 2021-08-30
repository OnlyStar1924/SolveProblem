#include <iostream>

using namespace std;

int main()
{
    int L = 1000;
    int t_max = 0;
    int p_max = 0;

    for (int p = L / 4 % 2; p < L + 1; p += 2)
    {
        int t = 0;
        for (int a = 2; a < (int)(p / 3.4142) + 1; a++)
        {
            if (p * (p - 2 * a) % (2 * (p - a)) == 0)
            {
                t++;
                if (t >= t_max)
                {
                    t_max = t;
                    p_max = p;
                }
            }
        }
    }

    cout << p_max << endl;
    cout << t_max << endl;

    return 0;
}
