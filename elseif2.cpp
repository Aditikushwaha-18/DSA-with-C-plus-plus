#include<iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"Enter length : "<<endl;
    cin>>l;
    cout<<"Enter breath : "<<endl;
    cin>>b;

    area = l*b;
    perimeter = 2*(l+b);

    if(area>perimeter){
        cout<<"Area of the given square is greater."<<endl;
    }
    else if(perimeter>area){
        cout<<"Perimeter of the given square is greater."<<endl;
    }
    else{
        cout<<"Area is equal to the perimeter.";
    }
}