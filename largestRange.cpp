#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    long long arr[100005];
   int n;
   cin >> n;
   for(int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum;
   cin >> sum;
   int maxCnt = 0;

    for(int i = 0; i < n; i++){
          int cnt = 0;

         if(sum - arr[i] >=0){
                cnt++;
          }


        for(int j = i + 1; j < n; j++){
             arr[i] += arr[j];
             if(sum - arr[i] >= 0){
                 cnt++;
             }
             else
                 break;

        }
        maxCnt = max(maxCnt, cnt);
    }


     cout << maxCnt << endl;

    return 0;
}
