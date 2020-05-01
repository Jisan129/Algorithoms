#include <iostream>
#include <bits/stdc++.h>


using namespace std;

long long countcoin(long long array[], long long number, long long x) {

    long long dp[x][number+1];
    for(long long i=0;i<x;i++){
        dp[i][0]=0;
    }
    for(long long i=0;i<x;i++){
        for(long long j=1;j<=number;j++){
            //cout<<array[i]<<" "<<j<<"No";
            //cout<<dp[i][j-array[i]]<<" ";
            if(array[i]>j){
                if(i!=0){
                    if(dp[i-1][j]==-1){
                        dp[i][j]=-1;}
                    else{
                        dp[i][j]=dp[i-1][j];
                    }} else{
                    dp[i][j]=-1;
                }
            }
            else if (dp[i][j-array[i]]==-1){
                if(i!=0){
                    if(dp[i-1][j]==-1){
                        dp[i][j]=-1;}
                    else{
                        dp[i][j]=dp[i-1][j];
                    }}
                else{
                    dp[i][j]=-1;
                }
            }
            else if(j>=array[i]&&dp[i][j-array[i]]!=-1){
                if(i!=0) {
                    //cout<<"Here";
                    long long excluding=dp[i-1][j];
                    long long including=dp[i][j-array[i]]+1;
                    if(excluding>including){
                        dp[i][j]=excluding;
                    } else{
                        dp[i][j]=including;
                    }

                } else{
                    dp[i][j] = dp[i][j - array[i]] + 1;
                }
            }

        }
        //cout<<endl;
    }
    /*   for(long long i=0;i<x;i++){
           for(long long j=0;j<=number;j++){
               cout<<dp[i][j]<<" ";
           }
           cout<<endl;
       }*/
    return dp[x-1][number];

}

int main(){
    long long number,x;
    cin>>number>>x;
    long long array[number+1];
    for(long long i=0;i<x;i++){
        cin>>array[i];
    }
    cout<<countcoin(array,number,x);
    return 0;
}