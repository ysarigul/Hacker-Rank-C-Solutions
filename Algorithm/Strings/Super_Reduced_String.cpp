#include <bits/stdc++.h>

using namespace std;

//aabbc
string super_reduced_string(string s){
    // Complete this function
   
   for(unsigned int i=1; i<s.length(); ++i)
      if(s.at(i-1)==s.at(i))
      {
         s.erase(i-1,2);
         i=0;
      }
   if(s.length()==0)
      return "Empty String";
   else
      return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
