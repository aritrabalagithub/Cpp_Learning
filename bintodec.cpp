#include<iostream>
using namespace std;
int main(){
int n,s=0,inc=1;
cin>>n;
while(n>0){
    s=s+(n%10)*inc;
    inc*=2;
    n/=10;
}
cout<<s<<" ";
    return 0;
}