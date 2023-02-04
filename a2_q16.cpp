#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int no=1;
    for (int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col<<"\t";
            }
        for(int spaces=1;spaces<=(n-row)*2-1;spaces++){
            cout<<"\t";
            }
        if (row==n){
            for(int col=row-1;col>0;col--){
            cout<<col<<"\t";
        }}
        else{
        for(int col=row;col>0;col--){
            cout<<col<<"\t";
        }}
        cout<<endl;
    }
    return 0;
    
}
