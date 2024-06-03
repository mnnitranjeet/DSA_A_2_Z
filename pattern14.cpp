/*
    1      1
    12    21
    123  321
    12344321  
    
    



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
            cout<<col;
        }
        for(int col = 1; col <=2*num - 2*row; col++){
            cout<<" ";
            
        }
        for(int col =row; col > 0; col--){
            cout<<col;
        }
        cout<<"\n";
    }
}