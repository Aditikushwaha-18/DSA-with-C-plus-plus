#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}