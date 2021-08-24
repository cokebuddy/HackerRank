#include<bits/stdc++.h>
#include<map>
using namespace std;

class arraySum{
  public:
      long long pairCount(int arr[], int n, int x){
        long long cnt = 0;

        map<int, int> m;
        for(int i = 0;i < n; i++){
          m[arr[i]]++;
        }
        for(int i = 0;i < n; i++){
          if(2*arr[i] == x){
            cnt += max(m[arr[i]] , 0);
          }
          else{
            cnt += m[x-arr[i]];
          }
        }
        return cnt;
      }
};

int main(){
    int n, x;
    cin >> n >> x;
    int arr[100004];
    for(int i = 0;i<n;i++) cin >>  arr[i];

    arraySum obj;
    long long res = obj.pairCount(arr,n,x);
    cout << res << endl;
    return 0;
}
