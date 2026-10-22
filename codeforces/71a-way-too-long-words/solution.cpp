#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }
    for(int i = 0 ; i < n ; i++){
        int limit = s[i].size();
        if(limit > 10){
            char front = s[i].front();
            char back = s[i].back();
            int size = limit-2;
            cout << front << size << back << endl;
        }
        else  cout << s[i] << endl;
    }
    return 0;
}
