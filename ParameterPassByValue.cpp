#include<iostream> 
using namespace std;    
int swap(int x, int y)  
{  
 int temp; 
 int incre;
 incre = x;
 temp=x;  
 x=y;  
 y=temp; 
 incre++;
 cout<<incre<<endl;
 return incre; 
}  
int main()   
{    
 int a=10, b=20, incre;    
 swap(a, b);  // passing value to function  
 cout<<"value of a is: "<<a<<endl<<"Value of b is: "<<b<<endl;
 cout<<"incre value of a is: "<<incre<<endl;
 return 0;
}    