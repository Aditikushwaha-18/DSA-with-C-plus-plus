#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,1,1,1,1,1,1,1,1,1,1,1};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}