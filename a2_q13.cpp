#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int row=1; row<=n;row++){
        for (int col=0;col<row;col++){
        int x=1;
        for (int i =row-1;i>row-col-1;i--){
            x=x*i;
            }
        int fact =1;
        for (int j=1;j<=col;j++){
                fact=fact*j;
                }
        cout<<x/fact<<"\t";}
    
        cout<<endl;
    }
    return 0;
}
