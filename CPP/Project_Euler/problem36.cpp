#include <iostream>
#include <string>

using namespace std;

bool is_palindromic(string s)
{
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

string dec2bin(int dec)
{
    string bin;

    while (dec > 0)
    {
        if (dec % 2 == 0)
            bin.insert(bin.begin(), '0');
        else
            bin.insert(bin.begin(), '1');

        dec >>= 1;
    }

    return bin;
}

int main()
{
    int sum = 0;

    for (int i = 1; i < 1000000; i += 2)
    {
        string str_dec = to_string(i);
        if (is_palindromic(str_dec))
        {
            if(is_palindromic(dec2bin(i))){
                sum+=i;
            }
        }
    }

    cout<<sum;
    return 0;
}