#include<iostream>
using namespace std;
int fab(int n){
    if(n==1||n==2){
        return 1;
    }
    return fab(n-1) + fab(n-2);
}
int main(){
    int n;
    cout<<"Enter the no. of term: "<<endl;
    cin>>n;
    cout<<fab(n);
}