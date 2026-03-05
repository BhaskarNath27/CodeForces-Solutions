#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    long long sum=0;
    long long res;
      
    while(t--){
        long long n;
        cin>>n;
        
        sum= n*(n+1)/2;
        long long p=1,s=0;
        while(p<=n){
            s=s+p;
            p=p*2;
        } 
        res=sum-2*s;
        
        cout<<res<<endl;
    } 
    
    return 0;
}
