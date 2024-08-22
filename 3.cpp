//write a function findmin that takes three integers as arguments and returns the smallest 
//one.use pass by value.
#include<iostream>
using namespace std;
int findmin(int x,int y,int z){
    int min = x;
    if (y < min)
    {
        min = y;
    }
    if (z < min)
    {
        min = z;
    } 
    return min;
}
int main(){
int a=4;
int b=5;
int c=6;
int minvalue = findmin(a,b,c);
cout<<"the smallest value is "<< minvalue << endl;
return 0;
}