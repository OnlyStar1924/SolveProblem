#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;



void insertion_sort(int arr[], int n)
{
    //duyet tu phai sang
    for (int i = n-1; i >=0; i--)
        {
            if (arr[n] >= arr[i] )
            {
                int temp = arr[n];
                for (int j = n; j > i+1; j--)
                {
                    arr[j] = arr[j-1];
                }
                arr[i+1] = temp;
                break;
            }    
        }
}

int main()
{
    ifstream infile;
    infile.open("sort.txt");

    int num;
    int n = 0;

    int arr[100];
    while (!infile.eof())
    {
        infile >> num;
        arr[n] = num;
        
        insertion_sort(arr, n);


        
        
        n++;
    }

    cout << n << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    infile.close();
    return 0;
}