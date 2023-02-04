#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int row=1;row<=n;row++){

            for(int spaces=1;spaces<=row-1;spaces++){
                cout<<"\t";
            }
            for(int col=1;col<=n+1-row;col++){
                cout<<"*\t";
        }
        cout<<endl;}
        
        return 0;
}
