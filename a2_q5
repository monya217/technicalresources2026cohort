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
            if (row<=(n+1)/2){

                for(int spaces=1;spaces<=(n+1)/2-row;spaces++){
                    cout<<"\t";
                }
                for(int col=1;col<=2*row-1;col++){
                    cout<<"*\t";
            }}
            else{
                for(int spaces=1;spaces<=row-(n+1)/2;spaces++){
                    cout<<"\t";
                }
                for(int col=1;col<=2*n-2*row+1;col++){
                    cout<<"*\t";

            }}
            cout<<endl;
        }}
        return 0;
}
