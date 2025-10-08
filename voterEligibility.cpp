#include<iostream>
using namespace std;
bool isEligible(int a){
    if(a>=18)
        return true;
    return false;
}
int main(){
    int age;
    cin>>age;
    isEligible(age)?cout<<"can vote":cout<<"cannot vote";
return 0;
}