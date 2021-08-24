#include<bits/stdc++.h>
#define Nodes 100000
using namespace std;

vector <long long> adj[Nodes+5];
queue<int> q;
int dis[Nodes + 5];

void BFS(int src, int n){
    dis[src]=0;
    q.push(src);
    int u,v;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(long long i = 0; i < adj[u].size();i++){
            v=adj[u][i];
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}

int main(){
    int n,cnt=0;
    long long e;
    cin >> n >> e;
    int k, l;
    for(long long i = 1; i <= n; i++)
        dis[i] = -1;
    for(long long i = 0;i < e; i++){
        cin >> k >> l;
        adj[k].push_back(l);
        adj[l].push_back(k);
    }
    for(int i = 0; i<n; i++){
        if(dis[i]==-1){
            BFS(i,n);
            cnt++;
        }
    }

    cnt--;
    cout << cnt << endl;
    return 0;
}
