#include<iostream>
using namespace std;
int main(){
	string st="";
	cin>>st;
	int j=st.size()-1;
	int i=0;
	while(i<j){
		if(st[i]!=st[j]){
			cout<< "not a palandrome string \n";
			return 0;
		}
		i++,j--;
	}
	cout<<"string is palandrome\n";
	return 0;
}
