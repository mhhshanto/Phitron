#include <bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  int ln = a.length();
  char arr[a.length() + 1]; 
	strcpy(arr, a.c_str()); 
  int ab=0;
  int c=0;
  int g=0;
  int t=0;
  for (int i = 0; i < a.length(); i++){
    if(arr[i]== 'T'){
      t++;
    }else if (arr[i]== 'A')
    {
      ab+=1;
    }else if (arr[i]== 'C')
    {
      c+=1;
    }else if (arr[i]== 'G')
    {
      g+=1;
    }
   
  }
   cout << ab <<"\n";
  cout << c <<"\n";
  cout << t <<"\n";
  cout << g <<"\n";
  if(ab>0){
    ab-=1;
  }
  if(t>0){
    t-=1;
  }
  if(c>0){
    c-=1;
  }
  if(g>0){
    g-=1;
  }
  int sum = ab+t+c+g;
  cout << ab <<"\n";
  cout << c <<"\n";
  cout << t <<"\n";
  cout << g <<"\n";
  cout << sum;
	return 0;	
}