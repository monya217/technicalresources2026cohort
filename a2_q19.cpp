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
           if (row==1){
                for(int col=1;col<=(n+1)/2;col++){
                    cout<<"*\t";
                }
                for(int spaces=1;spaces<=(n-3)/2;spaces++){
                    cout<<"\t";
                    }
                cout<<"*";}
            else if (row<(n+1)/2){
                for(int spaces=1;spaces<=(n-1)/2;spaces++){
                    cout<<"\t";}
                cout<<"*\t";
                for(int spaces=1;spaces<=(n-3)/2;spaces++){
                    cout<<"\t";
                }
                cout<<"*\t";
            }
            else if(row==(n+1)/2){
                for(int col=1;col<=n;col++){
                    cout<<"*\t";}}
            
            else if(row==n){
                cout<<"*\t";
                
                for(int spaces=1;spaces<=(n-3)/2;spaces++){
                    cout<<"\t";}
                for(int col=1;col<=(n+1)/2;col++){
                    cout<<"*\t";
                }}
          
            else {
                cout<<"*\t";
                for(int spaces=1;spaces<=(n-3)/2;spaces++){
                    cout<<"\t";}
                cout<<"*\t";
            }
            cout<<endl;
        
        }
        }
        return 0;
}
