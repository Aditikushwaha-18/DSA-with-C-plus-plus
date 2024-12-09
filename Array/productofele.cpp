#include<iostream>
using namespace std;
int main(){
    int p=1;
    int arr[]={4,5,35,7,12};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        p*=arr[i];
    }
    cout<<endl<<p;
}