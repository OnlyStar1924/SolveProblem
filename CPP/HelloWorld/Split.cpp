#include<stdio.h>
#include <iostream>

#include <fstream>
#include <string>
using namespace std;

int main()
{
    string data;

    // mo mot file trong che do read.
    ifstream infile;
    infile.open("Text.txt");

    cout << "\n===========================\n";
    cout << "Doc du lieu co trong file!" << endl;
    //infile >> data;
    getline(infile, data);
    char del = ' ';

    string hand[5];

    string temp = "";
    int j = 0;
    for (int i = 0; i < (int)data.size(); i++) {
        // If cur char is not del, then append it to the cur "word", otherwise
          // you have completed the word, print it, and start a new word.
        if (data[i] != del) {
            temp += data[i];
        }
        else {
            hand[j] = temp;
            j++;
            //cout << temp << " ";
            temp = "";
        }
    }

    //cout << temp;
    hand[j] = temp;
    cout << endl;

    int arrSize = sizeof(hand) / sizeof(hand[0]);

    //// ghi du lieu tren man hinh.
    cout << arrSize << endl;



    // dong file da mo.
    infile.close();

    return 0;
}