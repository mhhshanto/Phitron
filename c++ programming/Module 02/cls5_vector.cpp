#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int>a;
  for (int i = 0; i < 10; i++)
  {
    cout<<"Before push"<<a.size()<<"\n";
    a.push_back(i);
    cout<<"after push"<<a.size()<<"\n";
  }
  a.erase(a.begin()+5);
  a.resize(3);
  for (int i = 0; i < a.size(); i++)
  {
   cout<<a[i]<<"\n";
  }
  
  return 0;
}