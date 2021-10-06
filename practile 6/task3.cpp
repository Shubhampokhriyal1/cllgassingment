#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string st="";
	cin>>st;
	reverse(st.begin(),st.end());
	cout<<"reverseed string is "<<st<<endl;
	return 0;
}
