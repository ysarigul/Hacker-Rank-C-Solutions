#include <bits/stdc++.h>

using namespace std;



int main() {
     int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>m>>n;
        vector<int>v(n);
        map<int,int>maps;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(maps.find(v[i])!=maps.end()){
                cout<<maps[v[i]]+1<<" "<<i+1<<endl;
            }
            maps[m-v[i]]=i;            
        }
    }
    return 0;
}
