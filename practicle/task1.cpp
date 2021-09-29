#include<iostream>
namespace first{
int log(int a,int b){
	return a+b;
}
}
namespace second{
	float add(float a,float b){
		return a+b;
	}
}
int main(){
	std::cout<<first::add(1,5)<<"\n";
	std::cout<<secont::add(1,5.9)<<"\n";
	std::cout<<second::add(1.6,5)<<"\n";
	std::cout<<first::add(0,0)<<"\n";
	return 0;
}
