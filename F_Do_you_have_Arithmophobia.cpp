// https://toph.co/arena?practice=65cbc385bc9e641f6fbd2371#!/p/65c5128babff03e2acba16c2
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 5*1e7;
vector<bool> arr(N, true);

bool isPalindrome(int n){

    string tmp = to_string(n), _tmp = tmp;
    reverse(tmp.begin(), tmp.end());

    if(tmp == _tmp){
        return true;
    }else{
        return false;
    }

}

int32_t main(){
    FastIO();

    arr[0] = arr[1] = false;

    for(int i=2; i<=N; i++){
        if(arr[i] == true){
            for(int j=2*i; j<=N; j+=i){
                arr[j] = false;
            }
        }
    }
    
    int n, m;
    cin >> n >> m;

    int count = 0;
    for(int i=n; i<=m; i++){
        if(arr[i] == true && isPalindrome(i)){
            count++;
        }
    }

    cout << count << endl;
    
return 0;
}