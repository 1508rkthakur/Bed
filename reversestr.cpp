#include<bits/stdc++.h>
using namespace std;
void revstr(string & str,int i, int j){
    if(i>j) return ;
    swap(str[i],str[j]);
    i++;
    j--;
    revstr(str,i,j);
}
bool ispalindrome(string str, int i){
    // int n=str.length()-1;
    if(i>str.length()-1-i) return 1;
    i++;
    if(str[i]!=str[str.length()-1-i]) return 0;
    return (ispalindrome(str,i));

}
int main(){
    string str="abcdeedcba";
    // revstr(str,0,str.length()-1);
    // cout<<str<<endl;
    bool paldans=ispalindrome(str,0);
    cout<<paldans<<endl;

}
