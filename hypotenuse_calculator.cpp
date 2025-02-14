#include <iostream>
#include <math.h> //matematik kütüphanesini kullandık//
using namespace std;



double hipotenüs(double x, double y){
  return sqrt((x*x)+(y*y)); //sqrt matematik kütüphanesinden alındı ve karekök hesapladı//
}
int main() {
 double x,y;
  cout<<"Lütfen dik kenar değerini giriniz:";
  cin>>x;
  cout<<"Lütfen diğer dik kenar değerini giriniz:";
  cin>>y;
  cout<<"Hipotenüs uzunluğu:"<<hipotenüs(x,y);
}
