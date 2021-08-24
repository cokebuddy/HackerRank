#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int fiveH = 0, oneH = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

    while (x > 0){
        if(x >= 500){
            fiveH = x / 500;
            x = x % 500;
        }
        else if(x >= 100 && x < 500){
            oneH = x / 100;
            x = x % 100;
        }
        else if(x >= 50 && x < 100){
            fifty = x / 50;
            x = x % 50;
        }
        else if(x >= 20 && x < 50){
            twenty = x / 20;
            x = x % 20;
        }
        else if(x >= 10 && x < 20){
            ten = x / 10;
            x = x % 10;
        }
        else if(x >= 5 && x < 10){
            five = x / 5;
            x = x % 5;
        }
        if(x >= 2 && x < 5){
            two = x / 2;
            x = x % 2;
        }
        else if(x >= 1 && x < 2){
            one = x / 1;
            x = x % 1;
        }
    }

    int total = fiveH + oneH + fifty + twenty + ten + five + two + one;
    cout << total << endl;
    return 0;
}
