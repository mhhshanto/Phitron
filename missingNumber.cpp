#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  vector<int>a;
  a.resize(n-1);
  for (int i = 1; i < n; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for (int i = 1; i <= n; i++)
  {
    if(a[i]!=i){
      cout<<i;
      return 0;
    }
  }
 return 0; 
}