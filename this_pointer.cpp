#include <iostream>
using namespace std;

class Box{
public:
  
Box(int l=5, int b=3, int h=2)
{
  cout<<"Object is created"<<endl;
  length=l;
  breadth=b;
  height=h;
}

int getVolume()
{
  return length*breadth*height;
}

int compare(Box box)
{
  return this->getVolume()>box.getVolume(); // this pointer
}
private:
int length,breadth,height;

};

int main() {

  Box box1(4,6,8);
  Box box2(3,7,5);

  
  if(box2.compare(box1))
  {
    cout<<"Box2 is bigger than box1"<<endl;
  }
  else
    cout<<"Box2 is equal or smaller than box1";

  return 0;

}
