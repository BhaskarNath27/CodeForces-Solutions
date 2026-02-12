#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin>>n;
     
    string s;
    cin>>s;
    int countA=0;
    int countD=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            countA++;    
        }else{
            countD++;
        }
        
    }
    
    if(countA>countD){
        cout<<"Anton"<<endl;
    }else if(countA<countD){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    
    
    return 0;
}

//TC=O(N)
//SC=O(1)
