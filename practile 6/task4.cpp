#include<iostream>
#include<string>
using namespace std;
string reverseString(string st){
	string rev="";
	for(int i=0;i<st.size();i++){
		rev=st[i]+rev;
	}
	return rev;
}
int main(){
	string st;
	getline(cin,st);
	st=reverseString(st);
	cout<<"reverseed string is "<<st<<endl;
	return 0;
}
