#include <bits/stdc++.h>

using namespace std;

int findMedian(vector <int> arr) {
    
    
    //sort the numbers first
    sort(arr.begin(), arr.end());
    int median=0;
    int midIndex = ceil(arr.size()/2);
    for (int i=0; i<arr.size(); i++)
    {    
        if(arr.empty())
        {
            
           median=0;
        }
       else if(arr.size()%2 !=0)
        {
            
          // if it is odd            
            median=  arr[midIndex];
        }
        else
        {
          median= (arr[midIndex]+ arr[midIndex-1])/2;
            
        }
    }
    return median;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = findMedian(arr);
    cout << result << endl;
    return 0;
}
