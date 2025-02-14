#include <iostream>
#include <math.h>
using namespace std;

const double pi= 3.14159; //pi değerini değiştirilemeyecek şekilde tanımladık//
  
double çevre(double r, double x){
  return (2*pi*r);
}

double alan (double r, double y){
  return (pi*r*r);
}

int main() 
{
  double r,x,y;
  cout<<"Lütfen dairenin yarıçap değerini giriniz:";
    cin>>r;
  cout<<"Dairenin Çevresi:"<<çevre(r,x)<<endl;
  cout<<"Dairenin Alanı:"<<alan(r,y);
}
