#include <bits/stdc++.h>

using namespace std;

void solve(vector <int> arr, int money) {
    
   int firstpick=0;
    int secondpick;
    
    unordered_map<int,int> costToflavor;
    
    
    for (int i=0; i<arr.size(); i++)
    {
        
        costToflavor[i]=arr[i];
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        secondpick=i;
        if(costToflavor.count(money-arr[i]))
        {
            firstpick=costToflavor[money-arr[i]];
            cout<< firstpick+1<< " "<<secondpick+1<< endl;
            return;
            
        }
  costToflavor[arr[i]]=i;      
    }
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int money;
        cin >> money;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        solve(arr, money);
    }
    return 0;
}
