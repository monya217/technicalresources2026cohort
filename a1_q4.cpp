#include <iostream>
using namespace std;
int main(int argc, char **argv){
     
    int low,high;
    cin>>low>>high;
   
        for (int prim=low;prim<=high;prim++) {
                bool isprime=1;
                for (int count=2;count<=prim-1;count++){
                    if (prim%count==0){
                                isprime=0;
                }}
                if (isprime){
                    cout<<prim<<endl;
                        }
                
            }
            return 0;
    }
