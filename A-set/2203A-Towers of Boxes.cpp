#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        double n;
        int m,d;
        cin>>n >>m >>d;
        
        if(m>d){
            cout<<n<<endl;
        }else{
            int n_per_tower=(d/m)+1;
            int result =ceil(double(n)/n_per_tower);
            cout<<result<<endl;
        }
    }
    
    
    return 0;
}
