#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int digit=0;
    int copy=n;
    int rem;
    while (copy>0){
        ++digit;
        copy=floor(copy/10);
        
    }
    for (int i=1;i<=k;i++) {
        rem=n%10;

       
        n = rem*pow(10,digit-1)+floor(n/10);
    
    }
    cout<<n<<endl;
    return 0;

}
