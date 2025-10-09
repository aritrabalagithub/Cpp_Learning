#include<iostream>
using namespace std;
int main(){
int n,i,j,k;
cin>>n;
for(i=1;i<=n;i++){
    for(k=1;k<i;k++)cout<<"  ";
    for(j=i*2;j<=n*2;j++)cout<<"* ";
    cout<<endl;
}
}