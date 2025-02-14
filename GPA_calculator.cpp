#include <iostream>
using namespace std;

double ortalama(double vize,double final)
{
 return (vize*0,4)+ (final*0.6); //return kullanarak sonuç değerini döndürdük//
}
int main() 
{
  double vize,final;
 cout<<"Lütfen Öğrencininin Vize Notunu Giriniz:";
  cin>>vize;
  cout<<"Lütfen Öğrencininin Final Notunu Giriniz:";
  cin>>final;
  cout<<"öğrencini notu:"<<ortalama(vize,final); //fonksiyon adı(değişken isimleri) yazarak fonksiyonu çağırdık ve sonucu yazdırdık//
}
