#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int number) {
    int sum;
    if(number<2){
        return number;
    } else{
        sum=findFibonacci(number-1)+findFibonacci(number-2);
    }
    return sum;

}

int main(){
    int number;
    cin>>number;
    int c=findFibonacci(number);
    cout<<c;
}