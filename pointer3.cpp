#include<iostream>
#include<Stdio.h>
using namespace std;

int main(){
    
    int *p;
   // p =(int*)malloc(5*(sizeof(int)));
    p = new int[5]; //like this asiign in c++
    p[0] = 10; p[1] = 20; p[2] = 30; p[3] = 40; p[4] = 50;
    
    for(int i=0; i<5;i++)
        cout<<p[i]<<endl;
        return 0;
}