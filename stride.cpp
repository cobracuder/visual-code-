#include<bits/stdc++.h>
using namespace std;
void generate_data(int* val,int numele){
    srand(time(0));
    for(int i = 0 ;i<numele;i++) {
        val[i]=rand()%1000;
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
        cout<< val[index]<<" ";
    }
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
/*stride is basically work similar to offset. It gives the index of element in flatten array.*/
