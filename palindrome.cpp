#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
  bool isPalindrome(string s){
    string name= "";
    for( char ch : s){
        if(isalnum(ch)) {
            name += tolower(ch);
        }
    }
    string kam = name;
    reverse(kam.begin(), kam.end());
    
    if( name == kam){
        return true;
    }
    else{
        return false;
    }

  }
};

// int main(){
//     Solution solver;
    
//     // LeetCode ka wahi solid test case
//     string test = "A man, a plan, a canal: Panama"; 
    
//     if (solver.isPalindrome(test)) {
//         cout << "SUCCESS: Palindrome hai! 🎯" << endl;
//     } else {
//         cout << "FAILED: Palindrome nahi hai! ❌" << endl;
//     }
    
//     return 0;
// }