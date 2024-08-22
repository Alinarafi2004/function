//create a function doublevalue that takes an integer by reference and doubles its value.
//demonstrate it by doubling a variable in the main function.
#include<iostream>
using namespace std;
void doublevalue(int &a){
    ++a;
}
int main(){
    int x=5;
    cout<<x<<endl;
    doublevalue(x);
    cout<<x<<endl;
    return 0;
}