#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    int ld;
    while(n!=0){
        ld=n%10;
        if(ld%2==0){
            sum+=ld;
        }
        n/=10;
    }
    cout<<sum;
}