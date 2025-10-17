#include<iostream>
using namespace std;
int main(){
    int n,s=0,inc=1;
    cin>>n;
    while(n>0){
       // s=s+(n%2)*inc;
       s=s+(n&1)*inc;
        n=n/2;
        inc*=10;
    }
    cout<<s<<endl;

    return 0;
}