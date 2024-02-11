#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int arr[6][2]={1,2,3,4,10,6,7,8,9,10,11,12};
    cout<<*(*arr+1);

    int d=10;
    void *ptr=NULL;
    cout<<*((int*)ptr);
}*/
int* getArray() {
    int* arr=new int[5]{1, 2, 3, 4, 5};

    return arr;
}

int main() {
    int* result ;
    result= getArray();
    
    // Use the returned array
    for (int i = 0; i < 5; ++i) {
        std::cout << result[i] << " ";
    }

    // Don't forget to free the allocated memory
    delete[] result;

    return 0;
}

 