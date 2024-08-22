//write a function swapnumbers that takes two integers by reference and swaps their values.
//demonstrate by swaping two varaibles in the main function.
#include<iostream>
using namespace std;
int swapnumbers(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=12;
    int y=13;
    cout<<"before swap"<<x<<endl;
    cout<<"before swap"<<y<<endl;
    swapnumbers(x,y);
    cout<<"after swap"<<x<<endl;
    cout<<"after swap"<<y<<endl;
    return 0;
}