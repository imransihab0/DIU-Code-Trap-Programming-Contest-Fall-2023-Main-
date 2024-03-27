// https://toph.co/arena?practice=6603ff6f8bd03d06dab6bff1#!/p/65c519f440a09243161459e9
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while(q--){
        int a, b;
        cin >> a >> b;
        arr[a-1] -= b;

        int max = 0;

        for(int i=0; i<n; i++){
            if(arr[i] >= max){
                max = arr[i];
            }
        }

        cout << max << endl;

    }

    
    
return 0;
}