/*
    *
   ***
  *****
 *******
*********



*/




#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num  - row ; col++){
            cout<<" ";
        }
        for(int col = 1; col <=2*row-1 ; col++){
            cout<<"*";
        }

        cout<<"\n";
    }
}