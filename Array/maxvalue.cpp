#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,8,2,45,23,46,9};
    int n=sizeof(arr)/4;
    int mx=arr[0];//int mx=INT_MAX;
    for(int i=1;i<n;i++){//i=0;
       // if(mx<arr[i]){
           // mx=arr[i];

        //}
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}