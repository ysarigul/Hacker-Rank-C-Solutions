#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    
    
    vector<long> numways(n+1); //#w ays to get sum x
    numways[0]=1; //init base case
    
    //go thru coins 1-by-1 to build up numways, 
    //consider cases sum>j = c[i]
    
    for(int i=0; i<m;i++)
    {
        for(int j = c[i]; j<=n; j++)
        {
            
            //find numways to get sum j given value c[i]
            //it consits of those found earlier plus new ones
            
            //if c[] =1,2,3... and c[i]=3, j=5, new ones will now include '3'
            //w/ numways[2]=2 that is '3', w/ '2', 3 w/ 1+1
            numways[j]+= numways[j -c[i]];
        }
        
    }
    
    cout<< numways[n];
    return 0;
}
