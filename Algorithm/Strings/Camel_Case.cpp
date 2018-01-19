#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int wordCount=0;
    for(int i=0; i<s.size(); i++)
    {
       
        if (isupper(s[i]))
        { wordCount++;}
        
            
    }
    return wordCount+1; //for the first word
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
