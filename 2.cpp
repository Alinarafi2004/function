//create a function calculatearea that takes the length and width of a rectangle as arguments and
//arguments and return the area.use pass by value.
#include<iostream>
using namespace std;
void print(int len){
    cout<<len<<endl;
    return;
}

int rectanglearea(int len,int wid){
    print(len);
    print(wid);
    int rectanglearea=len*wid;
    return rectanglearea;
}
int main(){
    int a=45;
    int b=23;
    cout<<rectanglearea(a,b)<<endl;
    return 0;

}