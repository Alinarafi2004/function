//write a function findmaxinarray that takes an integer array and its size as arguments.The 
//function should return the maximum value in the array using pass by reference for the array.
#include<iostream>
using namespace std;
int maxinarray(int arr[]){
    arr[2]=39;
}
void print(int arr[]){
    for (int i = 0; i < 4; i++)
{
    cout<<arr[i]<<" ";
    
}
cout<<endl;
}
int main(){
int arr[4]={1,2,3,4};
print(arr);
maxinarray(arr);
print(arr);
    return 0;
}