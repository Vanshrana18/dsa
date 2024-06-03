#include<bits/stdc++.h>
using namespace std;
string remove(string s){
    string temp="";
    for(int i =0;i<s.length();i++){
        if(s[i]==' '){
        temp.push_back("ok");
        
        }
        else{
        temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){

    string str;
    getline(cin,str);
    cout<<"new string is :- "<<remove(str)<<endl;
    return 0;
}