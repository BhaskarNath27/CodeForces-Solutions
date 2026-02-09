#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    int count =0;
    while(b>=a){
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}

//TC=O(1)
//SC=O(1)
