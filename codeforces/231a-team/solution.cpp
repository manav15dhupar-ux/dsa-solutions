#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int count = 0;
        vector<int> v(3);
        for(int i = 0 ; i < 3 ; i++){
            cin >> v[i];
            if(v[i] != 0) count++;
        }
        if(count >= 2) ans++;
    }
    cout << ans;
    return 0;
}
