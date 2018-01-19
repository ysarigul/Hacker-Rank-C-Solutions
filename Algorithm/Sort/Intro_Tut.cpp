#include <bits/stdc++.h>

using namespace std;




int main() {
    int V, ans;
    cin >> V;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
        if (arr[arr_i]==V)
            ans=arr_i;
    }
   
    cout << ans << endl;
    return 0;
}
