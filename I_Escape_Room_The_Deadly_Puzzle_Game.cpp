// https://toph.co/arena?practice=65c6731657b1a9af459e78c6#!/p/65c4c1b9e95ac323061eae28
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int arr[a];

        for(int i=0; i<a; i++){
            cin >> arr[i];
        }

        sort(arr, arr+a);

        int sum = 0;
        for(int i=0; i<min(a, c); i++){
            sum += arr[i];
        }

        if(sum <= b){
            cout << "ESCAPE THE ROOM!" << endl;
        }else{
            cout << "OPPS!" << endl;
        }

    }
    
return 0;
}