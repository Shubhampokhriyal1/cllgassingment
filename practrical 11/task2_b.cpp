 protected:
  int y;
 private:
  int z;
};
  class B:protected A{//protectedly inherited A
    public:
    void display(){
     x=10;
     y=20
      cout<<"x=>"<<x<<" y=>"<<y;
    }
  };
  int main(){
    B obj;
    //obj.x=30;protected
    //obj.y=40;protected
    obj.display();
    return 0;
  }
