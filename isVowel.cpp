#include<iostream>
using namespace std;
bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
    return false;

}
int main(){
    char ch;
    cout<<"enter a character of your choice"<<endl;
    cin>>ch;
    isVowel(ch)?cout<<"Vowel":cout<<"Consunant";
    return 0;
}