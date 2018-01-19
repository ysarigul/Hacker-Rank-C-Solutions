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

int letsMove( int a, int b, int n)
{
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    int distance[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            distance[i][j]=-1;
    distance[0][0]=0;
    int xMoves[]= {a,-a,a,-a,b,-b,b,-b};
    int yMoves[] ={b,-b,-b,b,a,-a,-a,a};
        while(!q.empty())
        {
            pair<int,int>pr= q.front();
            q.pop();
            int x= pr.first;
            int y= pr.second;
            
            for(int i=0; i<8; i++)
            {
                
                int nextX = x+ xMoves[i];
                int nextY = y+ yMoves[i];
                if(nextX>=0 && nextX<n && nextY>=0 && nextY<n && distance[nextY][nextX]==-1){
                q.push(make_pair(nextX,nextY));
                distance[nextY][nextX] = distance[y][x] + 1;
                if(nextX==n-1 && nextY == n-1)
                    return distance[nextY][nextX];
            }
        }
                
            }
            
            
            return -1;
        
  
    
}
int main(){
     int n;
    cin >> n;
    for(int a=1;a<n;a++){
        for(int b=1;b<n;b++){
            cout<<letsMove(a,b,n)<<" ";
        }
        cout<<endl;
    }
    return 0;

}
