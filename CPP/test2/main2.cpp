#include <iostream>
#include <fstream>

using namespace std;

// class DiceRotation
// {
// public:
//     int dice[4][3];

//     void rotateUp()
//     {
//         int temp = dice[0][0];
//         dice[0][0] = dice[0][1];
//         dice[0][1] = dice[0][2];
//         dice[0][2] = temp;
//     }
//     void rotateRight(){
//         int temp = dice[0][1];
//         dice[0][1] = dice[1][1];
//         dice[1][1] = dice[2][1];
//         dice[2][1] = dice[3][1];
//         dice[3][1] = temp;

//     }
//     int getValue(){
//         return dice[0][1];
//     }
//     int theCount(int goalx, int goaly)
//     {
//         if ((goalx == 1 and goaly != 4) or (goaly == 1 and goalx != 4))
//         {
//             return 0;
//         }
//         else if ((goalx == 4 and goaly > 1) or (goaly == 4 and goalx > 1))
//         {
//             return 4;
//         }
//         else
//         {
//             //in ra duong di

//             return 2;
//         }
//     }
// };

void rotateUp(int dice[3][4])
{
    int temp = dice[0][0];
    dice[0][0] = dice[1][0];
    dice[1][0] = dice[2][0];
    dice[2][0] = dice[1][2];
    dice[1][2] = temp;
}
void rotateRight(int dice[3][4])
{
    int temp = dice[1][3];
    dice[1][3] = dice[1][2];
    dice[1][2] = dice[1][1];
    dice[1][1] = dice[1][0];
    dice[1][0] = temp;
}
int getValue(int dice[3][4])
{
    return dice[1][0];
}

void printUp1(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    //in ra duong di
    // cout <<getValue(dice) << " ";
    o << getValue(dice) << " ";

    rotateRight(dice);
    // cout << getValue(dice) << " ";
    o << getValue(dice) << " ";

    for (int i = 0; i < goaly - 2; i++)
    {
        rotateUp(dice);
        // cout << getValue(dice) << " ";
        o << getValue(dice) << " ";
    }
    rotateRight(dice);
    // cout << getValue(dice) << " ";
    o << getValue(dice) << " ";

    rotateUp(dice);
    // cout << getValue(dice) << " ";
    o << getValue(dice) << " ";

    for (int i = 0; i < goalx - 2; i++)
    {
        rotateRight(dice);
        // cout << getValue(dice) << " ";
        o << getValue(dice) << " ";
    }
    rotateUp(dice);
    // cout << getValue(dice)<<endl;
    o << getValue(dice) << endl;

    o.close();
}

void printUp2(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";
    for (int i = 0; i < 3; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }
    for (int i = 0; i < goalx; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }
    rotateUp(dice);
    o << getValue(dice) << "\n";

    o.close();
}

void printUp3(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";
    for (int i = 0; i < 2; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }

    rotateRight(dice);
    o << getValue(dice) << " ";

    for (int i = 0; i < goaly - 2; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }

    rotateRight(dice);
    o << getValue(dice) << "\n";

    o.close();
}

void printUp4(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";

    rotateUp(dice);
    o << getValue(dice) << " ";

    rotateRight(dice);
    o << getValue(dice) << " ";

    for (int i = 0; i < 2; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }

    rotateUp(dice);
    o << getValue(dice) << "\n";
    o.close();
}

void printRight1(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);

    o << getValue(dice) << " ";
    rotateUp(dice);
    o << getValue(dice) << " ";
    for (int i = 0; i < goaly - 2; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }
    rotateUp(dice);
    o << getValue(dice) << " ";
    rotateRight(dice);
    o << getValue(dice) << " ";
    for (int i = 0; i < goalx - 2; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }
    rotateRight(dice);
    o << getValue(dice);
    o << endl;
    o.close();
}

void printRight2(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";
    for (int i = 0; i < 3; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }
    for (int i = 0; i < goaly; i++)
    {
        rotateUp(dice);
        o << getValue(dice) << " ";
    }
    rotateRight(dice);
    o << getValue(dice) << "\n";

    o.close();
}

void printRight3(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";
    for (int i = 0; i < 2; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }

    rotateUp(dice);
    o << getValue(dice) << " ";

    for (int i = 0; i < goalx - 2; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }

    rotateUp(dice);
    o << getValue(dice) << "\n";

    o.close();
}

void printRight4(int goalx, int goaly, int dice[3][4])
{
    ofstream o;
    o.open("output.txt", ios::app);
    o << getValue(dice) << " ";

    rotateRight(dice);
    o << getValue(dice) << " ";

    rotateUp(dice);
    o << getValue(dice) << " ";

    for (int i = 0; i < 2; i++)
    {
        rotateRight(dice);
        o << getValue(dice) << " ";
    }

    rotateRight(dice);
    o << getValue(dice) << "\n";
    o.close();
}

int theCount(int goalx, int goaly, int dice[3][4])
{
    int ans = 0;
    if (goaly > 2 and goalx > 2)
    {
        ans += 2;
        printUp1(goalx, goaly, dice);
        int dice2[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printRight1(goalx, goaly, dice2);
    }

    if (goaly == 4)
    {
        ans += 1;
        int dice3[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printUp2(goalx, goaly, dice3);
        if (goalx == 1)
        {
            ans += 1;
            int dice4[3][4] = {
                {5, 0, 0, 0},
                {1, 4, 6, 3},
                {2, 0, 0, 0}};
            printUp4(goalx, goaly, dice4);
        }
    }

    if (goaly >= 2 and goalx == 2)
    {
        ans += 1;
        int dice5[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printUp3(goalx, goaly, dice5);
    }

    if (goalx == 4)
    {
        ans += 1;
        int dice6[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printRight2(goalx, goaly, dice6);
        if (goaly == 1)
        {
            ans += 1;
            int dice7[3][4] = {
                {5, 0, 0, 0},
                {1, 4, 6, 3},
                {2, 0, 0, 0}};
            printRight4(goalx, goaly, dice7);
        }
    }

    if (goalx >= 2 and goaly == 2)
    {
        ans += 1;
        int dice8[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printRight3(goalx, goaly, dice8);
    }
    if (goalx == 3 and goaly == 2)
    {
        ans += 1;
        int dice9[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printRight1(goalx, goaly, dice9);
    }
    if (goalx == 2 and goaly == 3)
    {
        ans += 1;
        int dice10[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};
        printUp1(goalx, goaly, dice10);
    }

    ofstream o;
    o.open("output.txt", ios::app);
    o<<ans<<endl;
    o.close();
    return ans;
}

int main()
{
    ifstream infile;
    ofstream outfile;

    infile.open("input.txt");
    outfile.open("output.txt");

    int x, y;
    // DiceRotation tc;

    while (!infile.eof())
    {
        int dice[3][4] = {
            {5, 0, 0, 0},
            {1, 4, 6, 3},
            {2, 0, 0, 0}};

        infile >> x;
        infile >> y;
        // outfile << theCount(x, y,dice) << endl;
        cout << theCount(x, y, dice) << endl;
    }

    infile.close();
    outfile.close();

    return 0;
}

// void printLine1(int goalx, int goaly, int dice[3][4])
// {
//     ofstream o;
//     o.open("output.txt", ios::app);
//     //in ra duong di
//     // cout <<getValue(dice) << " ";
//     o <<getValue(dice) << " ";

//     rotateRight(dice);
//     // cout << getValue(dice) << " ";
//     o << getValue(dice) << " ";

//     for (int i = 0; i < goaly - 2; i++)
//     {
//         rotateUp(dice);
//         // cout << getValue(dice) << " ";
//         o << getValue(dice) << " ";

//     }
//     rotateRight(dice);
//     // cout << getValue(dice) << " ";
//     o << getValue(dice) << " ";

//     rotateUp(dice);
//     // cout << getValue(dice) << " ";
//     o << getValue(dice) << " ";

//     for (int i = 0; i < goalx - 2; i++)
//     {
//         rotateRight(dice);
//         // cout << getValue(dice) << " ";
//         o << getValue(dice) << " ";

//     }
//     rotateUp(dice);
//     // cout << getValue(dice)<<endl;
//     o << getValue(dice)<<endl;

//     o.close();
// }

// void printLine2(int goalx, int goaly, int dice[3][4])
// {
//     ofstream o;
//     o.open("output.txt", ios::app);

//     o << getValue(dice) << " ";
//     rotateUp(dice);
//     o << getValue(dice) << " ";
//     for (int i = 0; i < goaly - 2; i++)
//     {
//         rotateRight(dice);
//         o << getValue(dice) << " ";
//     }
//     rotateUp(dice);
//     o << getValue(dice) << " ";
//     rotateRight(dice);
//     o << getValue(dice) << " ";
//     for (int i = 0; i < goalx - 2; i++)
//     {
//         rotateUp(dice);
//         o << getValue(dice) << " ";
//     }
//     rotateRight(dice);
//     o << getValue(dice);
//     o << endl;
//     o.close();
// }

// void printLine3(int goalx, int goaly, int dice[3][4])
// {
//     ofstream o;
//     o.open("output.txt", ios::app);

//     o << getValue(dice) << " ";
//     for (int i = 0; i < 3; i++)
//     {
//         rotateRight(dice);
//         o << getValue(dice) << " ";
//     }
//     for (int i = 0; i < goaly; i++)
//     {
//         rotateUp(dice);
//         o << getValue(dice) << " ";
//     }
//     rotateRight(dice);
//     o << getValue(dice);
//     o << endl;

//     o.close();
// }

// void printLine4(int goalx, int goaly, int dice[3][4])
// {
//     ofstream o;
//     o.open("output.txt", ios::app);
//     o<< getValue(dice) << " ";
//     for (int i = 0; i < 3; i++)
//     {
//         rotateUp(dice);
//         o << getValue(dice) << " ";
//     }
//     for (int i = 0; i < goalx; i++)
//     {
//         rotateRight(dice);
//         o << getValue(dice) << " ";
//     }
//     rotateUp(dice);
//     o << getValue(dice);
//     o << endl;
//     o.close();
// }

// int theCount(int goalx, int goaly, int dice[3][4])
// {
//     if ((goalx == 1 and goaly != 4) or (goaly == 1 and goalx != 4))
//     {
//         ofstream o;
//         o.open("output.txt", ios::app);
//         o<<"0"<<endl;
//         o<<endl;
//         o.close();
//         return 0;
//     }
//     else if ((goalx == 4 and goaly ==4))
//     {
//         ofstream o;
//         o.open("output.txt", ios::app);
//         o<<"4"<<endl;

//         printLine1(goalx, goaly, dice);

//         int dice2[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         printLine2(goalx, goaly, dice2);

//         int dice3[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         printLine3(goalx,goaly,dice3);

//         int dice4[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         printLine4(goalx,goaly,dice4);

//         // cout<<endl;
//         o<<endl;
//         o.close();
//         return 4;
//     }
//     else if ((goalx > 2 and goaly == 4 ) or (goalx == 4 and goaly >2 ))
//     {
//         // cout<<endl;
//         ofstream o;
//         o.open("output.txt", ios::app);
//         o<<"3"<<endl;
//         printLine1(goalx, goaly, dice);

//         int dice2[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         printLine2(goalx, goaly, dice2);

//         int dice3[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         if (goalx == 4)
//         {
//             printLine3(goalx, goaly, dice3);
//         }

//         if (goaly == 4)
//         {
//             printLine4(goalx, goaly, dice3);
//         }
//         o<<endl;
//         o.close();
//         return 3;
//     }

//     else
//     {
//         ofstream o;
//         o.open("output.txt", ios::app);
//         o<<"2"<<endl;
//         printLine1(goalx, goaly, dice);
//         int dice2[3][4] = {
//             {5, 0, 0, 0},
//             {1, 4, 6, 3},
//             {2, 0, 0, 0}};
//         printLine2(goalx, goaly, dice2);

//         // cout<<endl;
//         o<<endl;
//         o.close();
//         return 2;
//     }
// }