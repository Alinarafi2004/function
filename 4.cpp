//write a function iseven that takes as integer as an argument and returns true if the number is even
//and false its odd.use pass by value.
#include<iostream>
using namespace std;
int iseven(int number){
if (number%2==0)
{
    return 1;
}
else
{
    return 0;
}
}
int main(){
int value=iseven(value);
cout<<"Enter the value"<<endl;
cin>>value;
if (iseven(value))
{
    cout<<"even"<<endl;
}
else
{
    cout<<"odd"<<endl;
}
}