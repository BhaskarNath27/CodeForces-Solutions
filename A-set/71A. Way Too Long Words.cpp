#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.size()>10){
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    
    return 0;
}
//TC=O(N)
SC=O(1)
