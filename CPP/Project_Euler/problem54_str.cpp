#include <iostream>
#include <fstream>

using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

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

int checkHigher(string p[])
{
    int temp[5];
    temp[0] = convertScore(p[0]);
    temp[1] = convertScore(p[1]);
    temp[2] = convertScore(p[2]);
    temp[3] = convertScore(p[3]);
    temp[4] = convertScore(p[4]);

    return findMax(temp, 5);
}

int checkTwoPair(string p[])
{
    int pair = 0;
    string check[3];
    int lenCheck = 0;
    int curScore = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (p[i][0] == p[j][0])
            {
                if (lenCheck == 0 || p[i][0] != check[lenCheck - 1][0])
                {
                    check[lenCheck] = p[i][0];
                    lenCheck++;
                    pair++;
                    break;
                }
            }
        }
    }

    if (pair == 2)
    {
        for (int i = 0; i < 5; i++)
        {
            if (p[i][0] != check[0][0] && p[i][0] != check[1][0])
            {
                curScore += convertScore(p[i]) / 10;
            }
        }
        curScore += max(convertScore(check[0]), convertScore(check[1])) + 2000;
    }
    else if (pair == 1)
    {
        string cardLe[3];
        int index_card = 0;
        for (int i = 0; i < 5; i++)
        {
            if (p[i][0] != check[0][0])
            {
                cardLe[index_card] = p[i][0];
                index_card++;
            }
        }

        int max_L = convertScore(cardLe[0]);
        for (int i = 1; i < index_card; i++)
        {
            if (convertScore(cardLe[i]) > max_L)
            {
                max_L = convertScore(cardLe[i]);
            }
        }
        // cout<<max_L<<endl;
        curScore += max_L / 10;

        curScore += convertScore(check[0]) + 1000;
    }

    return curScore;
}

int checkThreeCard(string p[])
{
    int curScore = 0;
    for (int i = 0; i < 3; i++)
    {
        string check[3];
        int lenCheck = 0;
        int card = 1;
        for (int j = i + 1; j < 5; j++)
        {
            if (p[i][0] == p[j][0])
            {
                card++;
                check[lenCheck][0] = p[i][0];
                lenCheck++;
            }
        }

        //4 la
        if (card == 4)
        {
            curScore = convertScore(check[0]) + 7000;
            break;
        }
        else if (card == 3)
        {
            curScore = convertScore(check[0]) + 3000;
            //fullhouse
            char pair[3];
            int lenPair = 0;
            for (int ii = 0; ii < 5; ii++)
            {
                if (p[ii][0] != check[0][0])
                {
                    pair[lenPair] = p[ii][0];
                    lenPair++;
                }
            }
            if (pair[0] == pair[1])
            {
                curScore += 3000;
            }
            break;
        }
    }

    return curScore;
}

int checkStraight(string p[2])
{
    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        temp[i] = convertScore(p[i]);
    }

    //sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            if (temp[i] > temp[j])
            {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    int max = temp[4] / 10;

    for (int i = 0; i < 4; i++)
    {
        if (temp[i + 1] - temp[i] != 10)
        {
            return 0;
        }
    }

    if (p[0][1] == p[1][1] && p[0][1] == p[2][1] && p[0][1] == p[3][1] && p[0][1] == p[4][1])
    {
        if (max == 14)
        {
            return temp[4] + 9000;
        }
        return temp[4] + 8000;
    }

    return temp[4] + 4000;
}

int checkFlush(string p[2])
{
    if (p[0][1] == p[1][1] && p[0][1] == p[2][1] && p[0][1] == p[3][1] && p[0][1] == p[4][1])
    {
        return checkHigher(p) + 5000;
    }

    return 0;
}

int calculater(string p[])
{
    int score[5];
    score[0] = checkHigher(p);
    score[1] = checkTwoPair(p);
    score[2] = checkThreeCard(p);
    score[3] = checkStraight(p);
    score[4] = checkFlush(p);

    return findMax(score, 5);
}

int main()
{
    ifstream infile;
    infile.open("p054_poker.txt");
    string p1[5];
    string p2[5];
    int p1win = 0;

    while (!infile.eof())
    {

        for (int i = 0; i < 5; i++)
        {
            infile >> p1[i];
        }
        for (int i = 0; i < 5; i++)
        {
            infile >> p2[i];
        }

        if (calculater(p1) > calculater(p2))
        {
            p1win++;
        }
    }

    // cout<<checkThreeCard(p1)<<endl;
    cout << p1win << endl;
    infile.close();
    return 0;
}