#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int bubbleSort(vector<int> &v)
{
    int swapCount=0;
    for (int i = 0; i < v.size(); i++) {
    
    for (int j = 0; j < v.size() - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (v[j] > v[j + 1]) {
            swap(v[j], v[j + 1]);
            swapCount ++;
            
        }
    }
    
}
    return swapCount;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int counts = bubbleSort(a);
    //Swap amount
    cout << "Array is sorted in "<< counts<< " swaps."<<endl;
    
    //print the first element
    cout<< "First Element: "<< a.front()<<endl;
    //print the last element
    cout << "Last Element: " << a.back()<< endl;
    return 0;
}
