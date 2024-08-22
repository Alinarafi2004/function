//create a function sumdigits that takes an integer that as an argument and returns the sum of 
//its digits.use pass by value.
#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}
int add(int num1,int num2){
    print(num1);
    print(num2);
    int sum=num1+num2;
    return sum;
}
int main()
{
int a=57;
int b=67;
cout<<add(a,b)<<endl;
return 0;
}