#include <bits/stdc++.h> 
using namespace std;
 
#define endl '\n' 
typedef long long ll;
typedef unsigned long long ull;



// لا يُستطاع العلم براحة الجسم
// أحب الأعمال الي الله أدومها وان قل
// Be Fighter


// Problem Link : https://leetcode.com/problems/zigzag-conversion/


const int N = 1e3+5;
char a[N][501];


string convert(string s, int numRows) {
        if(numRows==1) return s;
 for(int i=0 ;i<N; i++){
    for(int j =0; j<501; j++){
      a[i][j]='#';
    }
  }

  int n = numRows;

  int nc = 1,zig=2,dig=n-2;
  for(int i=0 ;i<s.size();){
    // fill col
    for(int j=1; j<=n; j++){
      a[j][nc]=s[i++];
      if(i==s.size()) break;
    }
    nc = nc + n -1;

    // fill zig;
    int y = zig;
    for(int k = n-1 ; k>1; k--){
      if(i==s.size()) break;
      a[k][y++] =s[i++];
    }
    zig = zig +n-1;
  }

  string ans ="";

  for(int i=0;i<N ;i++){
    for(int j=0 ;j<501 ;j++){
      //cout <<  a[i][j] <<' ';
      if(a[i][j]!='#')
        ans.push_back(a[i][j]);
    }
  }

  return  ans;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    
  return 0;
}