#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int sum=0;
    sum+=x;
    int ld=0;
    int r=0;
    while(x!=0){
        ld=x%10;
        r*=10;//r=r*10;
        r+=ld;//r=r+ld;
        x/=10;//x=x/10
    }
    sum+=r;
    cout<<sum;
}