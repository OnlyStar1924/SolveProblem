#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    // ifstream infile;
    // infile.open("input.txt");
    freopen("in_MinimumProduct.txt", "r", stdin);

    long int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        long int a, b, x, y, n;
        long int ans;
        cin >> a >> b >> x >> y >> n;


        long int p = max(x, a - n), q = b;
        if (a - p <= n)
        {
            q = max(y, b - (n - (a - p)));
        }
        ans = p * q;
        p = max(y, b - n), q = a;
        if (b - p <= n)
        {
            q = max(x, a - (n - (b - p)));
        }
        ans = min(ans, p * q);
        cout << ans << endl;
    }

    // infile.close();

    return 0;
}