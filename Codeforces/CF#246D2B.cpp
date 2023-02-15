#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;
 
const int N = 1e5+5;
int height[N];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  for(int i=0 ;i<n;i++) 
    cin >> height[i];
  
  // 5
  // 3 4 3 2 4
  ll energy = 0 , dollar = height[0];
  for(int i=0 ; i<n-1 ; ++i){
    energy = height[i] - height[i+1] + energy;
    if(energy < 0) {
      energy*=-1;
      dollar += energy;
      energy = 0;
    }
    
  }
  cout << dollar << endl;
    
  return 0;
}

