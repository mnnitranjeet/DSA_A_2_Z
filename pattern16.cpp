/*
   A
   BB
   CCC
   DDDD
   EEEEE



*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;
    char ch = 'A';
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<ch;
          
                
        }
        ch = ch + 1;
        cout<<"\n";
    }
}