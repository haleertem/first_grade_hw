#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream dosya("deneme.txt", ios::app);
  string veri;
  string satir;

  if(dosya.is_open()){
    cout << "Lütfen istediğiniz meyve isimlerini giriniz: ";
    getline(cin,veri);
     dosya << veri<< endl;


    dosya.close();
  }
  else{
    cout << "Dosya açılamadı.";
  }
  
  fstream dosya2("deneme.txt", ios::in);
  if(dosya2.is_open()){
    while(getline(dosya2,satir)){
      cout << satir << endl;
    }
    dosya2.close();
  }
  else{
    cout << "Dosya açılamadı.";
  }
}
