#include <iostream>

using namespace std;

int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};
    int n = 8;

    int target = 200;

    int way[201];

    way[0] = 1;
    for (int i = 1; i < 201; i++)
    {
        way[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j < target +1; j++)
        {
            way[j] += way[j - coins[i]];
        }
        
    }

    cout<<way[target];

    return 0;
}