#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,a;
    cin>>n;
    for(i=0;i<n;i++){
        a=1;
        for(j=i;j<n-1;j++)cout<<" ";
        for(k=0;k<=i;k++){
            cout<<a<<" ";
            a=a*(i-k)/(k+1);
        }
        cout<<endl;
    }
    return 0;
}