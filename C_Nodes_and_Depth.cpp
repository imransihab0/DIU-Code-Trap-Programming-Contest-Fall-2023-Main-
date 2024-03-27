// https://toph.co/arena?practice=6603ff6f8bd03d06dab6bff1#!/p/65c4c5d3e95ac323061eae4c
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, s = 0;
    cin >> n;

    for(int i=0; i<=n; i++){
        s += (pow(3, i));
    }

    cout << s << endl;
    
return 0;
}