#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //cout<<(char)(96+i)<<" ";
            //ch='a'+i-1;
            ch='a'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}