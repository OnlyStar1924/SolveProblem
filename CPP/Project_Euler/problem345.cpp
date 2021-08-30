#include <iostream>
#include <fstream>

using namespace std;

int findIndexMax(int arr[], int n)
{
    int index = 0;
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int findMaxMatrix(int arr[][15], int n)
{
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    ifstream infile;
    infile.open("p345_matrix.txt");

    int arr[15][15];
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            infile >> arr[i][j];
        }
    }
    infile.close();

    // cout << findMaxMatrix(arr, 15) << " "; // 993

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            arr[i][j] = 993 - arr[i][j];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        int min = findMin(arr[i], 15);
        for (int j = 0; j < 15; j++)
        {
            arr[i][j] -= min;
        }
    }

    int brr[15][15];

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < 15; i++)
    {

        for (int j = 0; j < 15; j++)
        {
            int min = findMin(brr[j], 15);
            arr[i][j] -= min;
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << setw(3)<<arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
