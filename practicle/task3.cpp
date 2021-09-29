#include<iostream>
namespace second{
	float add(float a,float b){
		return a+b;
	}
}

namespace first{
int add(int a,int b){
	return a+b;
}
}
int main(){
	std::cout<<add( 1 , 5 )<<"\n";
	std::cout<<add( 1 , 5.9f )<<"\n";
	std::cout<<add( 1.6f , 5 )<<"\n";
	//std::cout<<second::add( 1.1f , 6.5f )<<"\n";
	std::cout<<add( 0 , 0 )<<"\n";
	return 0;
}
