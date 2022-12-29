#include <bits/stdc++.h>
using namespace std;
int main(){
  char str[4];
  cin>>str;
  if(str[0]== str[1] && str[1]==str[2]){
    cout<<"1";
  }else if (str[0]!= str[1] && str[1]!=str[2] && str[0] != str[2])
  {
    cout<<"6";
  }else{
    cout<<"3";
  }
 return 0; 
}