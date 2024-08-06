// problem link
// https://codeforces.com/contest/1999/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin >> n;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        
        cout << sum << endl;
        
    }
}