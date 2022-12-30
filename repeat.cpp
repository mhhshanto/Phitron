#include <bits/stdc++.h>
using namespace std;
int main(){
string a;
  cin>>a;
  int ln = a.length();
  char arr[a.length() + 1]; 
	strcpy(arr, a.c_str()); 
  int ab=1;
  for (int i = 1; i < a.length(); i++){
    if(arr[i]== arr[i-1]){
      ab++;
    }
   
  }
  cout << ab;
  return 0;
}