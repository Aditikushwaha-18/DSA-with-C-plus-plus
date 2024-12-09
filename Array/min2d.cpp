#include<iostream>
using namespace std;
int main(){
    int arr[2][4]={9,2,3,4,5,1,8,7};
    int mn=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            mn=min(mn,arr[i][j]);
        }
    }
    cout<<mn;
}