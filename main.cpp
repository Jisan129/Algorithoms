//merge sort
#include <bits/stdc++.h>
using namespace std;


void Merge(int Array[],int lower,int higher,int mid) {
    int merge[100],k=lower,l=mid+1,i=lower;
    //size<=size2? c=size:c=size2;


    while(k<=mid && l<=higher){
        if(Array[k]<Array[l]){
            merge[i++]=Array[k++];


        } else{
            merge[i++]=Array[l++];

        }
    }
    // cout<<Array[k]<<i<<" "<<endl;

    for(;k<=mid;k++){
        merge[i++]=Array[k];

    }
    for(;l<=higher;l++){
        merge[i++]=Array[l];

    }

    for(i=lower;i<=higher;i++){
        //cout<<merge[i]<<" ";
        Array[i]=merge[i];
    }


}



void IMerge(int Array[],int size){
    int p,l,h,mid,i;

    for(p=2;p<=size;p=p*2){
        for(i=0;i+p-1<=size;i=i+p){
            l=i;
            h=p+i-1;
            mid=(l+h)/2;
            Merge(Array,l,h,mid);
        }

    }
    if(p/2<size){
        Merge(Array,0,p/2-1,size);
    }

}

int main(){
    int array[]={11,13,7,12,16,9,24,5,10,3};
   // int array2[]={2,4,6,8};

    IMerge(array,10 );

    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }

return 0;

}

