#include<iostream>
using namespace std;
int main(){
    int arr[2][4]={1,2,3,4,5,9,8,7};
    int mx=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}