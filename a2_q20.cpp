#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    if (n%2==0){
        cout<<"enter odd no"<<endl;
    }
    else if(n==1){
        cout<<"*"<<endl;
    }
    else{
        for (int row=1;row<=n;row++){
           
            if (row<(n+1)/2 or row==n){
                cout<<"*";
                for(int spaces=1;spaces<=n-1;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
            }
        
            else if(row==(n+1)/2){
                cout<<"*";
                 for(int spaces=1;spaces<=(n-1)/2;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int spaces=1;spaces<=(n-1)/2;spaces++){
                    cout<<"\t";}
                cout<<"*";
            }
          
            else {
                cout<<"*";
                for(int spaces=1;spaces<=n-row;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int col=1;col<=2*row-n-1;col++){
                    cout<<"\t";}
                cout<<"*";
                for(int spaces=1;spaces<=n-row;spaces++){
                    cout<<"\t";
                    }
                cout<<"*";}
            cout<<endl;
        }}
        return 0;
}
