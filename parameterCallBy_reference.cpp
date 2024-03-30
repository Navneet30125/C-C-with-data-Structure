#include<iostream> 
using namespace std;    
void swap(int &x, int &y)  
{  
 int temp; 
 temp=x;  
 x=y;  
 y=temp;  
}  
int main()   
{    
 int a=100, b=200;    
 swap(a, b);  // passing value to function through the call by reference parameter 
 cout<<"value of a is: "<<a<<endl<<"Value of b is: "<<b<<endl;
 return 0;
}    