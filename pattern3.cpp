/*
    1
    12
    123
    1234
    12345



*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<col;
        }
        cout<<"\n";
    }
}