#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        int primeCheck = 0;
        for(int j = 2; j <= i/2; j++){
            if(i%j == 0){
                primeCheck = 1;
                break;
            }
        }
        if(primeCheck == 0)
            cout << i << endl;
    }

    return 0;
}
