#include <bits/stdc++.h>
using namespace std;

void nodAndSod(int n){
    int nod[n];
    int sod[n];

    for(int i = 1;i <= n; i++){
        nod[i]=0;
        sod[i]=0;
    }
    for(int i = 1;i <= n; i++){
        for(int j = i; j <= n; j += i){
            nod[j]++;
            sod[j] += i;
        }
    }
    for(int i = 1; i<= n; i++)
        cout<<nod[i] << " " <<sod[i] <<endl;

}
int main(){
    int n;
    cin>>n;
    int sod[100005];
    int nod[n];

    nodAndSod(n);

    return 0;
}
