#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int a,b,sum;
    a=1;
    b=1;
    sum=a+b;
    for (int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            if (row==1){
                cout<<0;
            }
            else if (row==2){
                cout<<1<<"\t";
            }
            else{
                cout<<sum<<"\t";
                a=b;
                b=sum;
                sum=a+b;
            }
            }
       
        
        cout<<endl;
    }
    return 0;
    
}
