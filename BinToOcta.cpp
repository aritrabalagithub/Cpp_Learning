#include<iostream>
using namespace std;
int bintodec(int n){
    int s=0,inc=1;
    while(n>0){
        s+=(n%10)*inc;
        n/=10;
        inc*=2;
    }
    return s;
}
int dectooct(int n){
    int s=0,inc=1;
    while(n>0){
        s+=(n%8)*inc;
        inc*=10;
        n/=8;
    }
    return s;
}
int bintooct(int n){
    int s=bintodec(n);
    return dectooct(s);
}
int main(){
    int n;
    //int dec;
    cin>>n;
//    cout<<bintodec(n);
//    cout<<dectooct(13);
    cout<<bintooct(n)<<endl;
    
    return 0;
}