#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int w;
    cin>>w;
    if(w%2==0 && w!=2){    //for w=2 we have odd divisions for each of them which violates the given condition 
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
