//merge sort
#include <bits/stdc++.h>
using namespace std;


void Merge(long long  Array[],long long  lower,long long  higher,long long  mid) {
   long long   merge[100],k=lower,l=mid+1,i=lower;
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



void IMerge(long long  Array[],long long  size){
   long long   p,l,h,mid,i;

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
long long  Partition(long long  array[],long long  lower,long long  higher){
   long long   i=lower,j=higher,pivot=array[lower];

    do{
        do{ i++;}while (pivot>=array[i]);
            do{j--;}while(pivot<array[j]);

            if(i<j){
                swap(array[i],array[j]);
            }
    }
    while (i<j);


    swap(array[j],array[lower]);
    return j;
}
void QuickSort(long long  array[],long long  lower,long long  size){
   long long   j;
          if(lower<size) {
        j = Partition(array, lower, size);
        QuickSort(array, lower, j);
        QuickSort(array, j + 1, size);
    }
}
int main(){

   long long   size;
    cin>>size;
   long long   array[size];
    for(long long  i=0;i<size;i++){
        cin>>array[i];
    }

   QuickSort(array,0,size);

    for(long long  i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

return 0;

}

