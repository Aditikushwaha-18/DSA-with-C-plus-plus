#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: "<<endl;
    cin>>x;
    for(int i=x/2;i>=2;i--){
        if(x%i==0){
            cout<<i<<" ";
            break;
        }
    }
    cout<<"The given number is composite.";
}