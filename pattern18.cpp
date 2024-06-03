/*
   E
   D E
   C D E
   B C D E 
   A B C D E
*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;
    char ch = 'A'+ num-1;
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<ch<<" ";  
            ch = ch + 1;     
        }
        ch = 'A' + num-row-1;
        cout<<"\n";
    }
}