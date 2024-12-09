#include<iostream>
using namespace std;
int main(){
    int arr[]={12,5,6,3,7,18,1,8,20};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    int smx=arr[0];
    for(int i=1;i<n;i++){
        mx=max(mx,arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]!=mx){
          smx=max(smx,arr[i]);
        }
    }
    cout<<smx;
}