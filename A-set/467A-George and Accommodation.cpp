#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int count =0;
    
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            count++;
        }
    }
    
    cout<<count;
    
    
    return 0;
}

//TC=O(N)
//SC=O(1)
