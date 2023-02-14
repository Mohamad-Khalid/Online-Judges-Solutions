#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;
 
 
 vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans;
    for(int i=0; i<nums.size();i++){
      for(int j =i+1 ; j<nums.size();j++){
        if(nums[i]+nums[j]==target){
          ans.push_back(i);
          ans.push_back(j);
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