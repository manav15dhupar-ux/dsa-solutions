#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    vector<int> x(7);
    for(int i = 0 ; i < 7 ; i++){
      cin >> x[i];
    }
    sort(x.begin(),x.end());
    int n = x.size();
    int sum = 0;
    for(int i = 0 ; i < 6 ; i++){
        sum+= x[i];
      }
    
    sum *= -1;
    cout << sum+x[n-1] << " ";
  }
  return 0;
}
