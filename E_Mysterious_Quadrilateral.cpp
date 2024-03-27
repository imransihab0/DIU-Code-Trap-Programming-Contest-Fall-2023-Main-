#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    double a, b, c, d, x, n, tmp1 = 0, y = 0;
    cin >> x >> n;

    tmp1 = 360.0 - (2.0*n) + 17.0;
    y = tmp1/(3.0*x);
    
    cout << fixed << setprecision(2) << 2*y*x << endl;
    
return 0;
}