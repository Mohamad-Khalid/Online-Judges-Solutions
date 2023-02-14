#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;

// Problem Link  : https://leetcode.com/problems/find-all-anagrams-in-a-string/

 
int ch1[26],ch2[26];
bool equal(int a[] , int b[]){
for(int i=0 ;i<26;i++){
  if(a[i]!= b[i])
    return 0;
  }
  return 1;
}

vector<int> findAnagrams(string s, string p) {
  vector <int> ans;
  if(p.size() > s.size()){
    return ans;
  }
  else{

    for(int i=0 ;i<p.size();i++){
      ch2[p[i]-'a']++;
    }
    // abacbabc abc
    for(int i=0 ;i< p.size();i++){
      ch1[s[i]-'a']++;
    }
    if(equal(ch1,ch2)){
      ans.push_back(0);
    }

    // abacbabc abc
    for(int i=p.size() ;i<s.size();i++){
      ch1[s[i-p.size()]-'a']--;
      ch1[s[i]-'a']++;
      if(equal(ch1,ch2)){
        ans.push_back(i-p.size()+1);
      }
    }
  }
  return ans;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    
  return 0;
}