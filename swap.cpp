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
 int x=500, y=100;    
 swap(&x, &y);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}    