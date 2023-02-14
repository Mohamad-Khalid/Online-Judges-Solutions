#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;

// Problem Link : https://leetcode.com/problems/permutation-in-string/ 
 
bool checkInclusion(string s1, string s2) {
  vector<int> v(26, 0);
  for (int i = 0; i<s1.size(); i++) v[s1[i] - 'a']++;
  int s = 0;
  for (int e = 0; e<s2.size(); e++) {
      int lastChar = s2[e] - 'a';
      if (v[lastChar] <= 0) {
          while (s < e && s2[s] - 'a' != lastChar) {
              v[s2[s++] - 'a']++;
          }
          s++;
          continue;
      }
      v[lastChar]--;
      if (e - s == s1.size() - 1) return true;
  }
  return false;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    
  return 0;
}