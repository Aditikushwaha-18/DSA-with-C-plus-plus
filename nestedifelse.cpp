#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first no :";
    cin>>a;
    cout<<"Enter the second no :";
    cin>>b;
    cout<<"Enter the third no :";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"First number is the greatest.";
        }
        else{
            cout<<"Third number is the greatest.";
        }
    }   
    else{
        if(b>c){
            cout<<"Second number is the greatest.";
        }
        else{
            cout<<"Third number is the greatest.";
        }
    }
}