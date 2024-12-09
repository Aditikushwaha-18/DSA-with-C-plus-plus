#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows: "<<endl;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=1;//a++;
        }
        cout<<endl;
    }
}