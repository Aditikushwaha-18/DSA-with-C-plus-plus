#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=1 ;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]*i<<" ";
    }
}