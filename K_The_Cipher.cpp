// https://toph.co/arena?practice=6603ff6f8bd03d06dab6bff1#!/p/65c4b698e95ac323061eac47
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 25153+1;
vector<int> v(N, true);

int numReturn(string s)
{
    int sum = 0, p = s.size();
    if(p == 1)
    {
        char t = s[0];
        sum = t - '0' - 17;
    }
    else if(p == 2)
    {
        char t1 = s[0], t2 = s[1];
        sum += ((t1 - '0' - 17)*10);
        sum += t2 - '0' - 17;
    }
    else if(p == 3)
    {
        char t1 = s[0], t2 = s[1], t3 = s[2];
        sum += ((t1 - '0' - 17)*100);
        sum += ((t2 - '0' - 17)*10);
        sum += (t3 - '0' - 17);
    }
    return sum;
}

int32_t main(){
    FastIO();

    vector<int> res;

    for(int i=2; i*i<N; i++) if(v[i]) for(int j=i*i; j<N; j+=i) v[j] = false;
    for(int i=0; i<N; i++) if(v[i]) res.push_back(i);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        while(n--)
        {
            string s;
            cin >> s;
            int num = numReturn(s);
            cout << res[num+2] << endl;
        }
    }
    
return 0;
}