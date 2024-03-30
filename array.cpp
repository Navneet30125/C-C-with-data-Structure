#include<iostream>
using namespace std;
 
int main(){
    int A[5] = {12, 44, 4};
 

    cout<< sizeof(A) <<endl;
    cout<<A[1]<<endl;
    printf("%d", A[4]);

    for(int i=0; i<5; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}