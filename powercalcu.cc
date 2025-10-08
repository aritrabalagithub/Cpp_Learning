#include<iostream>
using namespace std;
int pow(int x,int y){
    if(x==0)
        return 0;
    if(x==1||y==0)
    return 1;
    if(y%2==0)
        return pow(x*x,y/2);
    else
    return x*pow(x,y-1);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<endl<<pow(x,y);
    return 0;
}