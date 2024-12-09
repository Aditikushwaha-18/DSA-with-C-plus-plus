#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Sum of elements of an array are: "<<sum;
}