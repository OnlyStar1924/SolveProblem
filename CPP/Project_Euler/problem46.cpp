#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long int num)
{
    if (num == 1)
    {
        return false;
    }

    for (long int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int result;
    int i = 33;
    while (1)
    {

        int j = 0;
        bool ans = false;
        while (i >= (2 * j * j))
        {
            int x = i - (2 * j * j);
            if (is_prime(x))
            {
                ans = true;
                break;
            }
            j++;
        }
        if (ans == false)
        {
            result = i;
            break;
        }

        i += 2;
    }

    cout << result << "\n";
    return 0;
}