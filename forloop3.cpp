#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms: ";
    cin>>n;

    for(int i=1;i<=3*n+1;i+=3){
        cout<<i<<" ";
    }
}


//int a=1;

//for(int i=1;i<=n;i+=1){
//    cout<<a<<" ";
//    a=a+3;
//}