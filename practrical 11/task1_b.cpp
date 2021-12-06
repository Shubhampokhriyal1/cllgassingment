#include<iostream>
using namespace std;
class A{
 public:
  int x,y;
};
  class B:public A{
    public:
    void display(){
      cout<<"x=>"<<x<<" y=>"<<y;
    }
  };
  int main(){
    B obj;
    obj.x=30;
    obj.y=40;
    obj.display();
    return 0;
  }
