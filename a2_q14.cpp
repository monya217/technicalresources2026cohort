#include<iostream>
using namespace std;
int main(int agrc, char** argv){
    int n;
    cin >> n;
    for (int no=1;no<=10;no++){
        cout<<n<<" * "<<no<<" = "<<n*no<<endl;
    }
    return 0;
}
