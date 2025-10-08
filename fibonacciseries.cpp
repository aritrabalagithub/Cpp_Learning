#include<iostream>
using namespace std;
 int generatefibo(int n,int a,int b){
    if(n==0)
        return 0;
   else
   {
     cout<<a<<" ";
    return generatefibo(n-1,b,a+b);
   }
}
void fibo(int n){
    generatefibo(n,0,1);
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}