#include<iostream>
#include<Stdio.h>
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    printf("using pointer: %d, %d", p, &a);
    return 0;
}