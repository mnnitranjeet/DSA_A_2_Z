/*
   ABCDE
   ABCD
   ABC
   AB
   A


*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;
    char ch = 'A';

    for(int row = num; row > 0; row--){
        for(int col = 1; col <= row ; col++){
            cout<<ch;
            ch = ch + 1;
        }
        ch = 'A';
        cout<<"\n";
    }
}