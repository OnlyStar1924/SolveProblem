#include <iostream>

using namespace std;

unsigned long long int reverse_num(unsigned long long int n)
{
    unsigned long long int rem;
    unsigned long long int reverse = 0;

    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }

    return reverse;
}

bool is_palindrome(unsigned long long int num)
{
    unsigned long long int reverse = reverse_num(num);
    if (reverse == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_lychrel(unsigned long long int n){
    for (int i = 0; i < 50; i++)
    {
        n+=reverse_num(n);
        if (is_palindrome(n))
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int lychrel = 0;

    for (int i = 10; i < 10000; i++)
    {
        if (is_lychrel(i))
        {
            lychrel++;
        }
    }

    cout << lychrel << " ";

    // unsigned long long int n =89;
    // for (int i = 0; i < 50; i++)
    // {
    //     n+=reverse_num(n);
    //     cout << n << "\n";
        
    // }


    return 0;
}