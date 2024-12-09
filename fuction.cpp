#include<iostream>
using namespace std;
void usa(){
    cout<<"Hello you are in USA."<<endl;
    return;
}

void India(){
    cout<<"Hello you are in India."<<endl;
    return;
}

int main(){
    India();
    cout<<"Hello you are in Main."<<endl;
    usa();
    return 0;
}