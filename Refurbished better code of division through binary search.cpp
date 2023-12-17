#include <iostream>
using namespace std;
int search(int n,int m){
  int s = 0;
  int e = n;
  int mid = s+(e-s)/2;
  int ans = 0;
  while(s<=e){
    if(mid*m==n){
      ans = mid;
      break;
    }
    else if(mid*m<n){
      ans = mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid = s+(e-s)/2;

  }
  return ans;
}
int main() {
  int n;
  int m;
  cin>>n;
  cin>>m;
  int ans = search(abs(n),abs(m));
  // cout<<ans<<endl;
  if(n<0&&m<0){
    cout<<ans<<endl;
  }
  else if(n>0&&m<0){
    ans = 0-ans;
    cout<<ans<<endl;
  }
  else if(n<0&&m>0){
     ans = 0-ans;
    cout<<ans<<endl;
  }
  else{
    cout<<ans<<endl;
  }
  return 0;
}