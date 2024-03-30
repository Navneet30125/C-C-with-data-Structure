#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breath;
    int x;
};
int main(){
struct rectangle r1 = {10, 5};
r1.length = 15;
r1.breath = 10;
printf("%d \n",sizeof(r1));
cout<<r1.length<<endl;
cout<<r1.breath<<endl;
return 0;
}