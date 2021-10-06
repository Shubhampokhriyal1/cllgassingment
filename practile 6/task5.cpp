#include <cstring>
#include <iostream>
using namespace std;
int strCmp(string &s1,string &s2){
	int i=0,j=0; 
	if(s1.size()!=s2.size())return 0;
	while(i=j && i<s1.size()&& j<s2.size()){
		if(s1[i]!=s1[j]){
			return 0;
		}
	}
	return 1;
}
int main() {
  string str1 = "";
  string str2 = "";
  getline(cin,str1);
  getline(cin,str2);
  if(strCmp(str1, str2))cout<<"strings are equal"<<endl;
  else cout<<"strngs are unequal"<<endl;
  return 0;
}
