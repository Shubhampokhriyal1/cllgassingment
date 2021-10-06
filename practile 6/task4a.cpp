#include <string>
#include <iostream>
using namespace std;
int main() {
  string str1 = "";
  string str2 = "";
  getline(cin,str1);
  getline(cin,str2);
  if(str1.compare(str2)==0)cout<<"strings are equal"<<endl;
  else cout<<"strngs are unequal"<<endl;
  return 0;
}
