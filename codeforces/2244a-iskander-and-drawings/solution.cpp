#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int max_length = 0;
      int current_lengtgh = 0;
      for(char c : s){
         if(c == '#'){
            current_lengtgh++;
            max_length = max(max_length, current_lengtgh);
         }
         else{
            current_lengtgh = 0;
         }
      }
      if(max_length % 2 == 0) cout << max_length/2 << endl;
      else cout << (max_length+1)/2 << endl;
   }
   return 0;
}
