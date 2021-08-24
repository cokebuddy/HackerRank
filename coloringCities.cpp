#include <bits/stdc++.h>
#define Nodes 100005
#define UN -1
#define RED 0
#define BLACK 1
using namespace std;
long long black1 =0, red1 = 0,black2 =0, red2 = 0;
int color[Nodes],u,v;
vector<long long> graph[Nodes];
queue<int> q;
void totalCost(int src, int n){
    int g = 0;
    for(int i = 1; i <=n; i++) color[i] = UN;
    color[src]=BLACK;
    black1 = 500;
    red2=200;
    q.push(src);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(long long i=0;i<graph[u].size();i++){
            v=graph[u][i];
            if(color[v]==UN){
                if(color[u]==RED){
                    color[v]=BLACK;
                    black1 += 500;
                    red2+=200;
                }
                else{
                    color[v]=RED;
                    red1+= 200;
                    black2 += 500;

                }
                q.push(v);
            }
            else if (color[u]==color[v]){
                g=1;
            }
        }
    }
    int total1 = black1 + red1;
    int total2 = black2 + red2;
    if(g==0){
        if (total1>total2)
            cout << total2 << endl;
        else
            cout << total1 << endl;
    }
}


int main(){
    int n;
    long long e;
    cin >> n >> e;
    int u, v;
    for (long long i = 0; i < e; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    totalCost(1, n);
    return 0;
}
