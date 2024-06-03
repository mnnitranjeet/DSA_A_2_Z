/*
  12345
  1234
  123
  12
  1


*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num + 1 - row ; col++){
            cout<<col;
        }
        cout<<"\n";
    }
}