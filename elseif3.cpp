#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the % obtained.";
    cin>>x;

    if(x>=81 && x<=100){
        cout<<"Very Good.";
    }
    else if(x>=61){
        cout<<"Good.";
    }
    else if(x>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }

}