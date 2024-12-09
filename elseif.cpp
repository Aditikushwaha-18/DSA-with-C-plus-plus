#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price :";
    cin>>sp;

    if(sp>cp){
        cout<<"Profit!"<<endl;
        cout<<"Profit of Rs:"<<sp-cp<<" incured."<<endl;
    }
    else if(cp>sp){
        cout<<"Loss!"<<endl;
        cout<<"Loss of Rs:"<<cp-sp<<" incured."<<endl;
    }
    else{
        cout<<"No loss No profit incured.";
    }
    
}