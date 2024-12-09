#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            cout<<arr[i]*2<<" ";
        }
        else{
            cout<<arr[i]+10<<" ";
        }
    }
}