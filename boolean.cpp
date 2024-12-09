#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    bool flag = true;//1
    for(int i=x/2;i>=2;i--){
        if(x%i==0){
            flag=false;//0
            break;
        }
    }
    if(x==1) cout<<"Neither prime nor composite.";
    else if(flag==true) cout<<"The given number is prime.";
    else cout<<"The given number is composite.";
}