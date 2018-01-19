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


bool isPairMatch(char char1, char char2)
{
    
    if(char1== '(' && char2==')')
        return 1;
    else if (char1 == '{' && char2 == '}')
        return 1;
    else if (char1== '[' && char2 == ']')
        return 1;
    else return 0;
    
    
}



bool is_balanced(string expression) {
    
    int i=0;
    
    //Declare empty character stack
    stack <char> stack;
    
  for (int i=0; i<expression.length(); i++)
    {
        
        //if expression[i] is a starting parenthese then put on stack
        if (expression[i] =='{' || expression[i] =='[' || expression[i] =='(')
            stack.push(expression[i]);
        
        //if its ending par. then pop from stack and check if its matching
        
         else if (expression[i] =='}' || expression[i] ==']' || expression[i] == ')')
         {
             
             if (stack.empty() || !isPairMatch(stack.top(), expression[i]))
                 return 0;

             else
                 stack.pop();
            
             
         }
       
        
    }
    
    //if theres leftoevers then the stack isn't balanced
    if(stack.empty())
        return 1;
    else
        return 0;
    
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
