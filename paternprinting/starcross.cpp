#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter no. of columns: "<<endl;
    cin>>m;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i==j)||(j==(m+1-i))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }
}