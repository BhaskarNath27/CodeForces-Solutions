#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m,a;
    cin>> n>>m>>a;
    
    long long x=(n+a-1)/a;
    long long y=(m+a-1)/a;
    
    cout<<x*y<<endl;
    
    return 0;
}

//TC=O(1)
//SC=O(1)
