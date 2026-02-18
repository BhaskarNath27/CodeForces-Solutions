#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin>>n;
 
        string s;
        cin >> s;
 
        if(s.find("...")!= string::npos ) {
            cout <<2<<endl;
        } else {
            cout<<count(s.begin(), s.end(), '.') <<endl;
        }
    }
 
    return 0;
}
