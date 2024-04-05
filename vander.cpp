#include<bits/stdc++.h>
using namespace std;

class Vander{

    int N;
    bool inc;

    public:
    
    Vander(){
        N=-1;
        inc=false;
    }
    Vander(int N){
        this->N=N;
        inc=false;
    }
    Vander(int N, bool inc){
        this->N=N;
        this->inc=inc;
    }

    void vander(int *out, int *in, int in_size) {
        if(N==-1){
            N=in_size;
        }
        int x;
        if(inc==false) {
            x=N;
        }
        else {
            x=1;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<in_size;j++){
                out[j*N+i]=pow(in[j],abs(x-i-1));
            }
        }
    } 
    void display(int *arr, int row, int col){
        cout<<"\narray :\n";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i*col+j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main(){

    int N = 4;
    int in[] = {3, 1, 6};
    int n = sizeof(in)/sizeof(int);

    int *out = (int*)malloc(n*N*sizeof(int));
    Vander v(N,1);
    v.vander(out,in,n);
    v.display(out, n, N);
}
