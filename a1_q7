#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int newno=0;
    int digit=0;
    int copy=n;
    while (copy>0){
        ++digit;
        copy=floor(copy/10);
    }
  
    for (int i=1;i<=digit;i++){


        int rem=n%10;
        
        n=floor(n/10);
        newno=(pow(10,rem-1)*i)+newno;
    
    }
        cout<<newno<<endl;
        return 0;
        }
