#include <iostream>
#include <bits/stdc++.h>
#include <wingdi.h>

using namespace std;

void countcoin(int array[], int number, int x) {

    int dp[x][number+1];
    for(int i=0;i<x;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<x;i++){
        for(int j=1;j<number+1;j++){
            if(array[i]<j){
                dp[i][j]=-1;
            } else if(j-array[i]>=0&&dp[i][j-array[i]!=-1]){
                dp[i][j]=dp[i][j-array[i]]+1;

            } else if(dp[i][j-array[i]]==-1){
                dp[i][j-array[i]]=-1;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<number+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


}

int main(){
    int number,x;
    cin>>number>>x;
    int array[number+1];
    for(int i=0;i<x;i++){
        cin>>array[i];
    }
    countcoin(array,number,x);
}

