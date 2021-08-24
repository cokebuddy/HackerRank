#include <bits/stdc++.h>
#include<iomanip>
#include<math.h>

using namespace std;
int a[100005];
int main()
{
    int n,x,i,j;
    cin>>n;
    cin>>x;
    int temp=x;
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int cnt=1;
    for(i=0; i<n; i++)
    {

        x=x-a[i];
        if(a[i+1]>x)
        {
            x=temp;
            cnt++;
        }
    }


    cout<<cnt;

    return 0;
}
