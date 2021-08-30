#include<iostream>
#include<fstream>

using namespace std;


int convertScore(string c)
{
    switch (c[0])
    {
    case '2':
        return 20;
    case '3':
        return 30;
    case '4':
        return 40;
    case '5':
        return 50;
    case '6':
        return 60;
    case '7':
        return 70;
    case '8':
        return 80;
    case '9':
        return 90;
    case 'T':
        return 100;
    case 'J':
        return 110;
    case 'Q':
        return 120;
    case 'K':
        return 130;
    case 'A':
        return 140;
    default:
        return 0;
    }
}

int main(){

    // string name;
    // int age;

    // cout<<"Enter your name ";
    // cin>>name;
    // cout<<"Enter your age ";
    // cin>>age;

    // cout<<"Hello "<<name<<", "<<age;
    // return 0;


    // string num1 = "10";
    // string num2 = "3";


    // cout<<num1.length();


    // if (num1 < num2)
    // {
    //     cout<<"be hon";
    // }else{
    //     cout<<"lon hon";

    // }

    ifstream infile;
    infile.open("Text.txt");

    // char arr[5][2];
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int f = 0; f < 2; f++)
    //     {
    //        infile>>arr[i][f];
    //     }
        
    // }


    // for (int i = 0; i < 5; i++)
    // {

    //     cout<<arr[i][0]<<arr[i][1]<<" ";
        
    // }


    string arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        infile>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<convertScore(arr[4]);
    
    infile.close();

    
}