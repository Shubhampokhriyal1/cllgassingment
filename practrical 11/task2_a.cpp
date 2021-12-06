#include<iostream>
using namespace std;
class A{
 public:
  int x;
 protected:
  int y;
 private:
  int z;
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
    //obj.y=40; protected
    obj.display();
    return 0;
  }
