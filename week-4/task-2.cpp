#include <iostream>
using namespace std;

int Linear (int A[], int n, int item){
    for(int i=0; i<n; i++){
        if (A[i]==item)
        return i;
    }
    return -1;
}
int main(){

    int A[] = {1,4,2,9,3,11};
    int n = sizeof(A) / sizeof(A[0]);
    int item = 4;

    int linear = Linear(A,n,item);
    cout<<"Index in linear search : "<<linear<<endl;

}
