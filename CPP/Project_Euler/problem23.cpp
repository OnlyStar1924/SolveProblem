#include <iostream>

using namespace std;

bool isAbundantNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num / 2 + 1; i++)
    {
        /* code */
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum > num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // int sum = 0;
    // for (int i = 13; i < 28123; i++)
    // {
    //     for (int  j = 12; j < i-12; j++){
    //         if (isAbundantNumber(j) && isAbundantNumber(i -j))
    //         {
    //             continue;
    //         }
    //     }
    //     sum+=i;
        
    // }
    
    // cout << sum;

    int arr[10000];
    int index =0;
    for (int i = 0; i < 10000; i++)
    {
        if (isAbundantNumber(i))
        {
            // cout<<i<<" ";
            arr[index] = i;
            index++;
        }
    }


    int sum = 0;
    for (int i = 13; i < 20162; i++)
    {
        bool test = false;
        for (int  j = 0; j < index; j++){
            if (i - arr[j] <=0)
            {
                break;
            }
            
            if (isAbundantNumber(i -arr[j]))
            {
                test = true;

                break;
            }
        }
        if (!test)
        {
            sum+=i;
        }
    }
    
    cout << sum;
    
    return 0;
}