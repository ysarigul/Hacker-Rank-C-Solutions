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

int countSteps(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int f1 = 1;
    int f2 = 2;
    int f3 = 4;

    int f = f3;
    for (int i = 3; i < n; ++i) {
        f = f1 + f2 + f3;
        f1 = f2;
        f2 = f3;
        f3 = f;
    }
    return f;
}

int main(){
    int s;
    cin >> s;
    for(int a0 = 0; a0 < s; a0++){
        int n;
        cin >> n;
        int ans=countSteps(n);
        cout<<ans<<endl;
    }
    
    return 0;
}
