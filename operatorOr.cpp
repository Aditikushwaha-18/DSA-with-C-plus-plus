#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if ((a%5==0||a%3==0)&&(a%12!=0)){
        cout<<"The given number is divisible by 5 or 3 but not divisible by 12.";
    }
}