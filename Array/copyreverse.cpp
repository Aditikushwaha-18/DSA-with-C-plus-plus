#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j=n-1-i;//in place of this
        b[i]=a[j];//b[i]==a[n-1-i];
        cout<<b[i]<<" ";
    }
}