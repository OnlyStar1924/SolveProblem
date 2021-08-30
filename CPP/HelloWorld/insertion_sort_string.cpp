#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;


bool compare_str(string num1, string num2){
    if (num1.length() < num2.length())
    {
        return true;
    }else if(num1.length() > num2.length()){
        return false;
    }else{
        if(num1 <= num2){
            return true;
        }else{
            return false;
        }
    }
    
}

void insertion_sort(string arr[], int n)
{
    // duyet tu trai sang
    for (int i = 0; i < n; i++)
    {
        if (compare_str(arr[n],arr[i]))
        {
            string temp = arr[n];
            for (int j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = temp;
        }
    }
}

int main()
{
    ifstream infile;
    infile.open("sort_string.txt");

    int total;
    infile >> total;

    string num[total];
    for (int i = 0; i < total; i++)
    {
        infile >> num[i];
        insertion_sort(num, i);
    }

    for (int i = 0; i < total; i++)
    {
        cout << num[i] << " ";
    }

    infile.close();
    return 0;
}