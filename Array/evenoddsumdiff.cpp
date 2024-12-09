#include<iostream>
using namespace std;
int main(){
    int esum=0;
    int osum=0;
    int arr[]={45,34,23,12,78,94,45,61,41,75,83,16,27,31};
    for(int i=0;i<14;i++){
        if(i%2==0){
            esum=arr[i];
        }
        else{
            osum=arr[i];
        }
    }
    cout<<"The difference between the even and the odd idices is: "<<osum-esum;
}