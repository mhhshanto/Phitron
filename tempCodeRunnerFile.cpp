#include <bits/stdc++.h>
using namespace std;
int main()
{
  int s,p;
  cin>>s>>p;
	string str;
  cin>>str;

	reverse(str.begin()+s, str.begin()+p);

	cout << str;
	return 0;
}
