#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int num)
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

    int sum = 2;
    int last;
    for (int i = 3; i < 100; i += 2)
    {
        if (is_prime(i))
        {
            sum += i;

            if (is_prime(sum))
            {

                last = sum;
                cout << last << endl;
            }
        }
    }

    cout << last << " ";

    return 0;
}