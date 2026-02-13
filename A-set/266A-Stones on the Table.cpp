#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<char> st;
    
    for(int i=0;i<n;i++){
        
        char s;
        cin>>s;
        st.push_back(s);
        
    }
    int count=0;
    for(int i=0;i<st.size();i++){
        if(st[i]==st[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}

//TC=O(N)
//SC=O(N)
