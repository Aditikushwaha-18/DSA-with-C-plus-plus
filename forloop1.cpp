#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n : "<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}

    // for(int i=2;i<=n;i+2){
    //   cout<<i<<" ";
    //   }