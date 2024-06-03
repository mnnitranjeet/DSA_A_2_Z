/*
    1 
    2 3
    4 5 6 
    7 8 9 10
    11 12 13 14 15



*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;
    int count = 1;
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<count<<" ";
            count++;     
        }
        cout<<"\n";
    }
}