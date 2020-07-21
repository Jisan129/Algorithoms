#include <bits/stdc++.h>

using namespace std;
int adjecancyMatrix[1000][1000];
int visited[1000];
int distanceNode[1000];
int position[1000];
vector<int> vc;

void bfs(int s, int n,int target) {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;

    }

    queue<int> q;
    q.push(s);
    visited[s] = 1;
    position[s]=s;
    distanceNode[s]=0;

    while (!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for (int i = 0; i < 5; i++) {
            if(adjecancyMatrix[node][i]!=0){
                if(visited[i]==0){

                    position[i]=node;
                    visited[i]=1;
                    distanceNode[i]=distanceNode[node]+1;
                    q.push(i);
                }
            }
        }
    }
    if(visited[target]==0){
        return;
    }

    vc.push_back(target);
    int now=target;
    while(now!=s){
        now=position[now];
        vc.push_back(now);
    }


}

/* 0    0    1     4

   0    0    0     0

   0    0    0     1

   0    2    0     0*/

int main() {
    int n, s;
    //cin >> n >> s;
    adjecancyMatrix[1][4]=1;
    adjecancyMatrix[1][3]=1;
    adjecancyMatrix[4][2]=1;
    adjecancyMatrix[3][4]=1;


    bfs(1,5,2);
    cout<<endl;

    for (auto i = vc.begin(); i !=vc.end(); i++) {
        cout<<*i<<" ";
    }

}