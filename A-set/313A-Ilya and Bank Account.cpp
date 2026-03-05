
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     
    long long n,n1,n2;
    cin>>n;
    
     
    if(n>=0){
        cout<<n<<endl;
    }else{
        n1=n/10;
        n2=(n/100)*10+(n%10);
        cout<<max(n1,n2)<<endl;
    }
     
    
    return 0;
}
