#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x = 0;
    vector<string> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(v[i] == "++X" || v[i] == "X++") x = x + 1;
        else x = x -1;
    }

    cout << x;

    return 0;
}
