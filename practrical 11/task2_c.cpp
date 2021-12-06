 protected:
  int y;
 private:
  int z;
};
  class B:private A{
    public:
    void display(){
     x=10;
     y=20;
      cout<<"x=>"<<x<<" y=>"<<y;
    }
  };
  int main(){
    B obj;
    //obj.x=30;
    //obj.y=40;
    obj.display();
    return 0;
  }
