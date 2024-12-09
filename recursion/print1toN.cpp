//without using a new parameter or varible

#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 0;
    }
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    print(n);
}