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


using grid_t = vector<vector<int>>;

int biggest_region(grid_t & grid, int i, int j) {
  if ((i < 0 || i  >= grid.size()) || (j < 0 || j >= grid[i].size()))
        return 0;
    
    if(grid[i][j])
    { grid[i][j]=0;}
    else
        return 0;
     return biggest_region(grid, i - 1, j - 1) +
           biggest_region(grid, i - 1, j    ) +
           biggest_region(grid, i - 1, j + 1) +
           biggest_region(grid, i    , j - 1) +
           biggest_region(grid, i    , j + 1) +
           biggest_region(grid, i + 1, j - 1) +
           biggest_region(grid, i + 1, j    ) +
           biggest_region(grid, i + 1, j + 1) +
           1;
    
}

int main(){
   
    int n, m;
    cin >> n >> m;

    grid_t grid(n, vector<int>(m));
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < m; ++j)
            cin >> grid[i][j];

    int maximum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maximum = max(biggest_region(grid, i, j), maximum);
    cout << maximum << endl;
    return 0;
}
