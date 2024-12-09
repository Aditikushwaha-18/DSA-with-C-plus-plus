#include<iostream>
using namespace std;
int powr(int n,int m){
    if(m==0){
        return 1;
    }
    return n* powr(n,m-1);
}
int main(){
    int a;
    cout<<"Enter a: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<powr(a,b);
}