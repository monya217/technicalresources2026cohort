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

                for(int spaces=1;spaces<=row-1;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int spaces=1;spaces<=n+1-2*row;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int spaces=1;spaces<=row-1;spaces++){
                    cout<<"\t";
                }
            }
            else if (row==(n+1)/2){
                 for(int spaces=1;spaces<=row-1;spaces++){
                    cout<<"\t";
                }
            
                cout<<"*";
                
            }
            
            else{
              
                for(int spaces=1;spaces<=n-row;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int spaces=1;spaces<=row*2-n-1;spaces++){
                    cout<<"\t";
                }
                cout<<"*";
                for(int spaces=1;spaces<=n-row;spaces++){
                    cout<<"\t";
                };
            }

            
            cout<<endl;}
    }
        return 0;
}
