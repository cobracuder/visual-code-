#include<bits/stdc++.h>
using namespace std;
void generate_data(int* val,int numele){
    srand(time(0));
    for(int i = 0 ;i<numele;i++) {
        val[i]=rand()%1000;
    }
}
void display(int* val, int*stride,int *shape,int rank) {
for(int i=1;i<rank;i++) {
    shape[i]=stride[i-1]/stride[i];
} 
for(int i = 0;i<shape[0];i++){
    for(int j=0;j<shape[1];j++){
        cout<<val[i*stride[0]+j*stride[1]]<<" ";
    }
    cout<<endl;
} 
}
void display2(int *val, int *stride, int *shape, int rank, int totalSize) {
    for (int i = 0; i < totalSize; i++) {
        int index = 0;
        int remainder = i;
        // Calculate index in the non-contiguous tensor
        for (int j = rank - 1; j >= 0; j--) {
            index += (remainder % shape[j]) * stride[j];
            remainder /= shape[j];
        }
        // Copy value from non-contiguous tensor to contiguous tensor
        cout<< val[index]<<" ";
    }

    // Return the contiguous tensor
    
}
//hello

int main() {
    int shape[]={4,4,5};
    int rank=sizeof(shape)/sizeof(int);
    int stride[]={20,5,1};
    int nonconti[]={4,1,4};
    int numele=1;
    for(int i=0;i<rank;i++){
        numele*=shape[i];
    }
    int*val=(int*)(malloc(numele*sizeof(int)));
    generate_data(val,numele);
   // display(val,non,shape,rank);
    cout<<"\ncontigous case:\n";
    display2(val,stride,shape,rank,numele);
    cout<<"\nnoncontiguous case:\n";
    display2(val,nonconti,shape,rank,numele);
}