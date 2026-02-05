#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int ans=0;
        // first gap (0 to first element)
        ans = max(ans, arr[0]);
        //chechking for max gap between consecutive n
        for(int i=1;i<n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        //check last gap
        ans=max(ans,2*(x-arr[n-1]));
        
        cout<<ans<<endl;
    }
    
    return 0;
}



//TC=O(n)
//SC=O(n)
