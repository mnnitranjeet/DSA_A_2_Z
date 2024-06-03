/*
    A
   ABA
  ABCBA
 ABCDCBA




*/




#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Please enter the number of rows \n";
    cin>>num;
    int count = 1;
    char ch = 'A';
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num  - row ; col++){
            cout<<" ";
        }
        for(int col = 1; col <=2*row-1 ; col++){
            if(count <= row){
                if(count == row){
                    cout<<ch;
                    ch = ch-1;
                }
                else{
                    cout<<ch;
                    ch = ch + 1;
                    count++;
                }
                
            }
            else{
                ch = ch-1;
                cout<<ch;
            }
            

        }
        ch = 'A';
        count = 1;

        cout<<"\n";
    }
}