#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string numbers = "";
    for(char c : s){
        if(c != '+') numbers += c;
    }
    sort(numbers.begin(), numbers.end());

    for(int i = 0 ; i < numbers.size() ; i++){
        cout << numbers[i];
        if (i < numbers.size() - 1) cout << '+';
    }
    return 0;
}
