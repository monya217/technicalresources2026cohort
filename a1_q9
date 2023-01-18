#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    int min,max;
    cin >> num1 >> num2;
    if (num1>num2){
        min=num2;
        max=num1;
}
    else{
        min=num1;
        max=num2;

    }
    int gcd=1;
    for (int i=1;i<=min;i++){
        if (min%i==0 and max%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    int lcm=max;
    while(1){
        if (lcm%num1==0 and lcm%num2==0){
            cout<<lcm<<endl;
            break;
        }
    ++lcm;
    
    }
    return 0;
}
