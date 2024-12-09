#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<endl<<"Enter x: ";
    cin>>x;
    for(int i=0;i<=n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<endl<<count;
}