#include<iostream> 
using namespace std;    
void swap(int *x, int *y)  
{  
 int temp; 
 temp=*x;  
 *x=*y;  
 *y=temp;  
}  
int main()   
{    
 int a=10, b=20;    
 swap(&a, &b);  // passing value using call by address parameter function  
 cout<<"value of a is: "<<a<<endl<<"Value of b is: "<<b<<endl;
 return 0;
}    