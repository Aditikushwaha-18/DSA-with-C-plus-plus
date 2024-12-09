#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter rows & column: "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==(x/2+1)||j==(x/2+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}