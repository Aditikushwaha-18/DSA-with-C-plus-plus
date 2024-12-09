#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=4;
        }
    }
    int b[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            b[i][j]=4;
        }
    }
    int sum[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}