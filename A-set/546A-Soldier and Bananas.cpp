#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k,n,w;
    cin>>k>>n>>w;
    
    int temp=0;
    int amtreq=0;
    for(int i=1;i<=w;i++){
        temp=k*i;
        amtreq=temp+amtreq;
        
    }
    if(amtreq>n){
        cout<<amtreq-n<<endl;
    }else{
        cout<<0<<endl;
    }
    
    return 0;
}
//TC=O(N)
//SC=O(1)
