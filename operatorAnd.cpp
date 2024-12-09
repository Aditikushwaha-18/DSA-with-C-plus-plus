#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a three digit no. :"<<endl;
    cin>>a;

    if(a>99&&a<1000){
        cout<<"THe given no. is a three digit number. "<<endl<<"Thank You!!";
    }
    else{
        cout<<"The given no. is not a three digit number."<<endl;
        cout<<"Thank You!!";
    }
}