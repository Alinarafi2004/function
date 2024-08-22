#include<iostream>
using namespace std;
int updatevalues(int a,int b){
    a=a+b;
    b=a-b;
}
void print(int a,int b){
    cout<<a+b<<endl;
    cout<<a-b<<endl;
}
int main(){
    int x=5;
    int y=3;
    updatevalues(x,y);
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    return 0;
}