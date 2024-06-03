/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1



*/


#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            if(row % 2 == 0){
                if(col % 2 != 0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
            else{
            
                if(col % 2 == 0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<"\n";
    }
}