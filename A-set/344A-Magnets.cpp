#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin>>n;
    vector<string> st;
    
    for(int i=0;i<n;i++){
        
        string s;
        cin>>s;
        st.push_back(s);
        
    }
    int count=0;
    for(int i=0;i<st.size();i++){
        if(st[i]!=st[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}
