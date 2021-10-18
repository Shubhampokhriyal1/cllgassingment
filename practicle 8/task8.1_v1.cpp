#include<iostream>
using namespace std;
int main(){
	int  arr[]={10,4,5,6,7};
	int *p=arr;
	cout<<*(p++)<<endl;
	cout<<*p<<endl;
	return 0;
}
