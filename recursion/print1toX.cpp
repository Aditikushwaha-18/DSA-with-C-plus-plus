//By using a new parameter or variable

#include<iostream>
using namespace std;
int print(int n,int x){
    if(n>x){
        return 0;
    }
    cout<<n<<endl;
    print(n+1,x);
}
int main(){
    int n=1;
    int x;
    cout<<"Enter x: "<<endl;
    cin>>x;
    print(n,x);
}