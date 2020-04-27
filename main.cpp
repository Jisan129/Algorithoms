#include <iostream>
#include <bits/stdc++.h>
#include <wingdi.h>

using namespace std;
int fibo[1000]={-1};
int findFibonacci(int number) {
  if(number<2){
      return number;
  }
  if(fibo[number]!=-1){
      return fibo[number];
  }
  else {
      fibo[number]=findFibonacci(number-2)+findFibonacci(number-1);
      return fibo[number];
  }

}

int main(){
    int number;
    cin>>number;
    int c=findFibonacci(number);
    cout<<c;
}