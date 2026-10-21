#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int kth_score = a[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)  {
        if (a[i] >= kth_score && a[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
