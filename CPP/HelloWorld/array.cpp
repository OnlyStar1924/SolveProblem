#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 4, 9};


    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << arrSize<<endl;


    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}