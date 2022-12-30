#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	 
	string str = "";
	
	cin>>str;

	char arr[str.length() + 1]; 

	strcpy(arr, str.c_str()); 
  int num1 = arr[0]-48;
  int num2 = arr[2]-48;
  
  
  cout<<num1*num2;
	return 0; 
}