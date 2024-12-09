#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ld;
    int p=1;
    while(n!=0){
        ld=n%10;
        p*=ld;
        n/=10;
    }
    cout<<p;
}