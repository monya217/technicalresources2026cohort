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
                
                for(int col=0;col<row;col++){
                    cout<<col+row<<"\t";
                }
                
                for(int col=0;col>1-row;col--){
                    cout<<2*row+col-2<<"\t";
                }
            }
            else{
              
                for(int spaces=1;spaces<=row-(n+1)/2;spaces++){
                    cout<<"\t";
                }
                for(int col=0;col<n-row+1;col++){
                    cout<<n-row+col+1<<"\t";
                }
                for(int col=0;col>row-n;col--){
                    cout<<(n-row)*2+col<<"\t";
                }
            }

            
            cout<<endl;}
    }
        return 0;
}
