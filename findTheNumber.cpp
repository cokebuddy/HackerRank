#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, left, mid, right,n,q;
    int arr[100004];
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);

    for(int j=0;j<q;j++){
        scanf("%d",&x);
        left = 0;
        right = n-1;
        mid = (left+right)/2;
        while(left<=right){
            if(arr[mid] < x) left = mid + 1;
            else if(arr[mid] == x) {
                    printf("%d\n",mid);
                    break;
            }
            else
                right = mid-1;
            mid=(left+right)/2;

        }
        if(left>right)
            printf("-1\n");
    }
    return 0;
}
