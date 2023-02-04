#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*    ";
        }
        cout<<endl;
    }

   
 }
