#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;
 
// Problem Link : https://leetcode.com/problems/jump-game-ii/

int jump(vector<int>& nums) {
  int n=nums.size();
  if(n<=1) return 0;
  int jump=0,currStart=0,currEnd=0,currMaxReach =-1;
  while (currStart < n-1){
    // 0 1 2 3 4 5     j=2   reach=4
    //         e
    // 2,3,1,1,4,5
    //     s
    currMaxReach = max(currMaxReach,currStart+nums[currStart]);
    if(currMaxReach >= n-1){
      jump++;
      break;
    }
    if(currStart==currEnd){
      jump++;
      currEnd = currMaxReach;
    }
    currStart++;
  }
  return jump;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    
  return 0;
}