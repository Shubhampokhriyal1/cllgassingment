#include<iostream>
using namespace std;
class A{
 public:
 	void displayA(){
    	cout<<"class A\n";
    }
};
  class B:virtual public A{
    public:
    void displayB(){
    	cout<<"class B\n";
    }
  };
    class C :virtual public A{
    public:
    void displayC(){
    	cout<<"class C\n";
    }
  };
   class D:public C,public B{
    public:
    void displayD(){
    	cout<<"class D\n";
    }
 };
  int main(){
    D obj;
    obj.displayA();
    return 0;
  }
