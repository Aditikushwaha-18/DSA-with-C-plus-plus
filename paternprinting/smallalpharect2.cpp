#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter column: "<<endl;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<(char)(i+96)<<" ";     //typecating
        }
        cout<<endl;
    }
}