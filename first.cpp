#include<iostream>
using namespace std;
int main(){
   // cout<<"hello world";
    int n,f=1;
   cin>>n;
   if (n<0) {
    cout<<"factorial not defined for negative integer";
    return 0;
   }
    for(int i=2;i<=n;i++)f*=i;
    cout<<"factorial: "<<f;
    return 0;
}