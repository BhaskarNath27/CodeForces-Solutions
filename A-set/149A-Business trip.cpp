#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k;
    cin>>k;
    
    vector<int> a(12);
    
    int sum=0;
    int count=0;
    for(int i=0;i<12;i++){
        cin>>a[i];
    } 
    
    sort(a.begin(),a.end(),greater<int>());
 
 
    for(int i=0;i<12;i++){
        if(sum>=k){
            break;
        }
        sum=sum+a[i];
        count++;
             
    }
    if(sum<k) cout<<"-1"<<endl;
    else cout<<count<<endl;
  
    return 0;
}
