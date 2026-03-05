#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    int res=n+(n-1)/(m-1);
    cout<<res<<endl;
   
    return 0;
}
