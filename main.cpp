#include <bits/stdc++.h>

using namespace std;
int adjecancyMatrix[1000][1000];
int visited[1000];

void bfs(int s, int n) {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while (!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for (int i = 0; i < 5; i++) {
              if(adjecancyMatrix[node][i]!=0){
                  if(visited[i]==0){
                      visited[i]=1;
                      q.push(i);
                  }
              }
        }
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
    

    bfs(1,5);
}