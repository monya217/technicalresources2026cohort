#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    if (n%2==0){
        cout<<"enter odd no"<<endl;
    }
    else{
        for (int row=1;row<=n;row++){
           
            if (row<(n+1)/2){

                for(int spaces=1;spaces<=(n-1)/2;spaces++){
                    cout<<"\t";
                }
                for(int col=1;col<=row;col++){
                    cout<<"*\t";
            }}
            else if(row==(n+1)/2){
                 for(int col=1;col<=n;col++){
                    cout<<"*\t";
                }}
            else {
                for(int spaces=1;spaces<=(n-1)/2;spaces++){
                    cout<<"\t";
                }
                for(int col=1;col<=n-row+1;col++){
                    cout<<"*\t";

            }}
            cout<<endl;
        }}
        return 0;
}
