#include <iostream>
#include <cmath>

using namespace std;


bool is_prime(int num){
    if (num ==1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
    
}

bool is_truncatable(int num){
    int div =10;
    int pre = 999;
    int t = num % div;

    while (pre != t)
    {
        if(!is_prime(t)){
            return false;
        }
        pre = t;
        div*=10;
        t = num % div;
    }


    div /= 10;

    while (div >= 10)
    {
        t = num / div;
        if(!is_prime(t)){
            return false;
        }
        div /= 10;

    }
    


    return true;
    

}

int main()
{
    int sum =0;
    int i =0;
    int num=23;
    while (i<11)
    {
        if (is_truncatable(num))
        {
            i++;
            cout<<num<<endl;
            sum+=num;
        }
        num++;
        
    }
    
    cout<<sum<<endl;

    return 0;
}