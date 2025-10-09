#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,p;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++)cout<<"  ";
        for(j=1;j<=i;j++)cout<<j<<" ";
        for(p=i-1;p>=1;p--)cout<<p<<" ";
        cout<<endl;
    }
    return 0;
}