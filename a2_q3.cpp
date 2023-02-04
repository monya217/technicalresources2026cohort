#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int row=1;row<=n;row++){

            for(int spaces=1;spaces<=n-row;spaces++){
                cout<<"\t";
            }
            for(int col=1;col<=row;col++){
                cout<<"*\t";
        }
        cout<<endl;}
        
        return 0;
}
