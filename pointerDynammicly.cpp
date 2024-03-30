#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breath;
};
int main()
{
struct Rectangle *p;
//p=(struct Ractangle*)malloc(sizeof(int));
p = new Rectangle; //in c++ asign the value of any pointer
p->length = 15;
p->breath = 7;
cout<<p->length<<endl;
cout<<p->breath<<endl;
return 0;
}