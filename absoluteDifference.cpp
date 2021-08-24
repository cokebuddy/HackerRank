/*Insert two value, the program will give
output positive value everytime. like: |3-5|=2*/
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int x = a - b;
    int r = abs(x);
    cout << r;

    return 0;
}
