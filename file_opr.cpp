#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
  fstream dosya("deneme.txt", ios::app | ios::in);
  string veri;
  string satir;
  string kelime;
  int sayac = 0;

  if(dosya.is_open()){
    cout << "Lütfen istediğiniz meyve isimlerini giriniz: ";
    getline(cin, veri);
    dosya << veri<< endl;

    //dosyayı başından itibaren okuması için imleci başa getirdim
    dosya.seekg(0, ios::beg); 

    while(getline(dosya,satir)){
      cout << satir << endl;

      // stringstream sınıfını kullanarak stringleri saydırdım
      stringstream ss(satir); 
      while(ss >> kelime){
        sayac++;
      }
    }
    
    cout << "Toplam " << sayac << " adet meyve ismi bulundu.";

    dosya.close();
  }
  else{
    cout << "Dosya açılamadı.";
  }
}
