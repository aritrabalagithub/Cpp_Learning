#include<iostream>
using namespace std;
int pow(int x,int y){
    if(x==0)
    return 0;
    if(y==0)return 1;
    if(y%2==0)return pow(x*x,y/2);
    return x*pow(x,y-1);
    
}
int count(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
bool isArmstrong(int n){
    int c=n;
    if(c<0)return false;
    int d=count(n);
    int s=0;
    while(c>0){
        s+=pow(c%10,d);
        c/=10;
    }
    return s==n;
}
int main(){
    int n;
    cin>>n;
    isArmstrong(n)?cout<<"Armstrong":cout<<"Not Armstrong";
    return 0;
}