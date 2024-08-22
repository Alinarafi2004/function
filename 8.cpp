//create a function increment that takes an integer by reference and increases its value by 1.
//demonstrate it by incrementing a variable in the main function.
#include<iostream>
using namespace std;
void increment(int &a){

    ++a;

}
int main(){
int x=34;
cout<<x<<endl;
increment(x);
cout<<x<<endl;
    return 0;
}