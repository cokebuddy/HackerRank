#include<bits/stdc++.h>
using namespace std;

struct task{
    int start;
    int end;
};

bool sortTask(task t1, task t2){
    return(t1.end < t2.end);
}

int count(task arr[], int n){
    sort(arr, arr+ n, sortTask);
    int i = 0;
    int cnt = 1;;

    for(int j = 1; j < n; j++){
        if(arr[j].start >= arr[i].end){
            cnt++;
            i = j;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    task arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }
    int res = count(arr, n);
    cout << res << endl;
    return 0;
}
