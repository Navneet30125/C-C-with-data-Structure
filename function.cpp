#include<iostream>
using namespace std;

int add(int num1, int num2){
   int num3 = num1+num2;
   return num3;
}
int main(){
     int num1=10, num2=51, sum;
    sum = add(num1, num2);
    cout<<"Sum is: "<<sum;
}