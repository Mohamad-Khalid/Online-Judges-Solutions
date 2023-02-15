#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;

// Problem Link : https://leetcode.com/problems/add-to-array-form-of-integer/


// 1,2,0,0  k = 34
// 9 9 9   345
// 1 3 4 4
vector<int> addToArrayForm(vector<int>& num, int k) {
  int n = num.size();
  int temp=0,carry=0; 
  for(int i= n-1 ;i>= 0 ; i--){
    temp = k %10;
    temp += num[i];
    temp += carry ;
    carry = 0;
    num[i] = temp %10;
    carry = temp / 10; 
    k/=10;
  }

  // 9  999
  // 1 0 0 8
  while (k){
    temp = k %10;
    temp += carry ;
    carry = 0;
    carry = temp / 10;
    k/=10;
    num.insert(num.begin(),temp%10); 
  }
  
  if(carry)
    num.insert(num.begin(),carry);

  return num; 
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector <int> v = {2};
  int k = 999;
  vector<int> ans = addToArrayForm(v,k);
  for(auto i : ans )
    cout << i << ' ';
  

  return 0;
}