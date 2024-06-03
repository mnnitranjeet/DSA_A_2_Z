/*
    *****
    
    *   *

    *   *

    *****




*/

#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number of rows \n";
    cin>>num;

    for(int row = 1; row <=2*num-1; row++){
        for(int col = 1; col <= num; col++){
            if(row == 1 || row ==2*num-1){
                cout<<"*";
            }
            else{
                if(row % 2 == 0){

                    cout<<" ";
                }
                else{
                    if(col == 1 || col == num){
                        cout<<"*";
                    }
                    else{
                        cout<<" "; 
                    }
                }
                
            }
           
        }
        
        cout<<"\n";
    }

}