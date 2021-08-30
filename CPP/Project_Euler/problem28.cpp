#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n = 1001;
    int s = (n-1) / 2;
    int ans = 16*pow(s,3) + 30 * pow(s,2) + 26*s +3;

    cout<<ans/3;

    return 0;
}