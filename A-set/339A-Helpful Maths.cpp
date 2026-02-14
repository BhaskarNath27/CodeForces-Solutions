#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin>>s;
    vector<int> str;
    for(int i=0;i<s.length();i++){
        
        if(s[i]!='+'){
        str.push_back(s[i]-'0');
            }
    }
    
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        cout<<str[i];
        if(i!=str.size()-1){
            cout<<"+";
        }
    }
    cout<<endl;
    
    
    
    
    
    return 0;
}
