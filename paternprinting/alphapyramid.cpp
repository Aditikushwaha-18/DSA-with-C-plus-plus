#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        int a=i+1;
        for(int k=2;k<=i;k++){
            cout<<(char)(a+64)<<" ";
            a+=1;
        }
        cout<<endl;
    }
}