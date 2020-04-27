#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int number) {
    int fibo[number+2];
    fibo[0]=0;
    fibo[1]=1;
    if(number<2){
        return number;
    }
    for(int i=2;i<=number;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    return fibo[number];

}

int main(){
    int number;
    cin>>number;
    int c=findFibonacci(number);
    cout<<c;
}