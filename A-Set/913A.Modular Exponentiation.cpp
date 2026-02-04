#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,m;
    cin>>n>>m;
    
    int ans=0;
    int a=pow(2,n);
    ans=m%a;
    cout<<ans;
 
    return 0;
}
