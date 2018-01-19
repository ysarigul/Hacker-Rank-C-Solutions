#include <bits/stdc++.h>

using namespace std;

unsigned int unsignedMax(const unsigned int& a, const unsigned int& b) {
  return (a < b ? b : a);
}

unsigned int cost(const vector<int>& B) {
  unsigned int hi = 0, lo = 0;
  unsigned int hi_lo_diff, lo_hi_diff, lo_temp, hi_temp;

  for(size_t i = 1; i < B.size(); i++) {
    hi_lo_diff = B[i-1] - 1; // B[i-1] >= 1
    lo_hi_diff = B[i] - 1; // B[i] >= 1

    lo_temp = unsignedMax(lo, hi + hi_lo_diff);
    hi_temp = unsignedMax(hi, lo + lo_hi_diff);

    lo = lo_temp;
    hi = hi_temp;
  }

  return unsignedMax(hi, lo);
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        int result = cost(arr);
        cout << result << endl;
    }
    return 0;
}
