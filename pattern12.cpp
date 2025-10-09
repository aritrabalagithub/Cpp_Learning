#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++)cout<<"  ";
        for(int j=1;j<=i;j++){
            ch='A'+j-1;cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}