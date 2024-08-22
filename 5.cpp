//write a function averagethat takes three float numbers as argumeants and return their average.
//use pass by value.
#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}
int average(int num1,int num2,int num3){
    print(num1);
    print(num2);
    print(num3);
    int average=num1+num2+num3/2;
    return average;
}

int main(){
    int a=56;
    int b=45;
    int c=89;
    cout<<"average(a,b,c/2)"<<endl;
return 0;
}