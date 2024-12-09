#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,8,2,45,23,46,9};
    int n=sizeof(arr)/4;
    int mn=arr[0];//int mn=INT_MIN;
    for(int i=1;i<n;i++){//i=0;
       // if(mn>arr[i]){
           // mn=arr[i];

        //}
        mn=min(mn,arr[i]);
    }
    cout<<mn;
}