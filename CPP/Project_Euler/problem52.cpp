#include <iostream>

using namespace std;

int findNumC(int num)
{
    int div = 1;
    int digit = 1;
    while (num / div > 10)
    {
        div *= 10;
        digit++;
    }
    return digit;
}

// void sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = n - 1; j > i; j--)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

bool calc(int arr[], int index, int num, int number)
{
    int newNum = num * number;
    int n = findNumC(newNum);

    int temp = newNum;
    // bool test = false;
    for (int i = 0; i < n; i++)
    {
        bool test = false;
        int tn = temp % 10;
        temp = temp / 10;
        // cout<<tn<<endl;
        // bool test2 = true;
        for (int j = 0; j < index; j++)
        {
            if (tn == arr[j])
            {
                test = true;
                // test2 = false;
                break;
            }
        }
        // if (test2)
        // {
        //     test = false;
        //     break;
        // }

        if (!test)
        {
            return false;
        }
        
        
    }

    return true;
}

bool isPermuted(int num)
{
    int arr[10];
    int index = 0;
    // int num = 120331657;
    int n = findNumC(num);

    int temp = num;
    for (int i = 0; i < n; i++)
    {
        int tn = temp % 10;
        temp = temp / 10;

        bool test = true;
        for (int j = 0; j < index; j++)
        {
            if (arr[j] == tn)
            {
                test = false;
                break;
            }
        }
        if (test)
        {
            arr[index] = tn;
            index++;
        }
    }

    // for (int i = 0; i < index; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    for (int i = 2; i < 7; i++)
    {
        if (!calc(arr, index, num, i))
        {
            return false;
        }
    }

    return true;
}
int main()
{
   
    int num = 20;
    // cout<<isPermuted(num);
    while (!isPermuted(num))
    {
        num+=1;
    }
    
    cout << num << endl;

    return 0;
}