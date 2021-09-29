#include<iostream>
namespace first{
int add(int a,int b){
	return a+b;
}
}
namespace second{
	float add(float a,float b){
		return a+b;
	}
}

using namespace first;
using namespace second;
int main(){
	std::cout<<add(1,5)<<"\n";
	std::cout<<add(1,5.9)<<"\n";
	std::cout<<add(1.6,5)<<"\n";
	std::cout<<add(0,0)<<"\n";
	return 0;
}
