#include <iostream>
#include <cmath>

using namespace std;


bool is_prime(long int num){
    if (num ==1)
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

bool is_divisor(long int num){
    for (long int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (!is_prime( 1 + num/i ))
            {
                return false;
            }
            
        }
        
    }
    
    return true;
}


int main()
{
    long int sum =0;
    long int num=2;

    while (num < 100000000)
    {
        if (is_divisor(num))
        {
            sum+=num;
        }
        num++;
        
    }
    

    cout<<sum<<endl;

    return 0;
}