#include<iostream>
using namespace std;
int fun(int *A, int n) //there * => [] also can used;
{
    A[0] = 15;
    for(int i=0; i<5; i++)
         cout<<A[i]<<endl;
};
int main(){
    int A[] = {2,4,6,8,10};
    int n =5;
    fun(A, n);
    //cout<<sizeof(A)<<sizeof(int)<<endl;
    for(int x:A){
       cout<<x<<" "; 
    }
    

}