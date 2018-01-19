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

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    //check base case, if the magazine has less words then ransom it wont work
   unordered_map< string, int > words;
    

    for (const string &i: magazine) // Iterate through magazine
        words[i] += 1; // Insert the word in the HashMap
                       // and increment by 1
        
    // b
    for (const string &i: ransom) // Iterate through ransom
        if (words[i] > 0) // Do we have the word atleast
                          // once in our HashMap?
            --words[i]; // If yes, decrement by 1
        else
            return false; // If not, we can't do a ransom note
        
    return true;
   
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
