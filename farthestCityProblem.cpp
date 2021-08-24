#include<bits/stdc++.h>
using namespace std;

vector <long long> adj[100005];
queue<int> q;
int dis[100005];

void BFS(int src, int n){
    for(long long i = 1; i <= n; i++)
        dis[i] = -1;

    int maxDis = 0;
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
                /*if(dis[v]>maxDis)
                    maxDis = dis[v];*/
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(dis[i]>maxDis)
            maxDis = dis[i];
    }
    cout << maxDis << endl;
}

int main(){
    int n;
    long long e;
    cin >> n >> e;
    int k, l;
    for(long long i = 0;i < e; i++){
        cin >> k >> l;
        adj[k].push_back(l);
        adj[l].push_back(k);
    }
    BFS(1,n);

    return 0;
}
