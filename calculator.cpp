//Hale Ertem 1306210068 22.12.2022 Lab Assignment #4//

#include <iostream>
#include <math.h> //fonksiyonlara işlem yaptırabilmek için matematik kütüphanesini kullandım//
using namespace std;

int sum(int h,int e){
  return h+e;
}

int difference(int h, int e){
  return h-e;
}

int product(int h, int e){
  return h*e;
}

float quotient(int h, float e){
  return h/e;
}

int main()
{
  int h,action,a;
  float e;
  
  cout<<"Plese enter two values to calculate their sum, difference, product and quotient:\n";
  
  etiket1: //işlemden sonra dönmek istediğim yer//
  
  cin>>h>>e;

    cout<<h<<"+"<<e<<"="<<sum(h,e)<<endl;
     
    cout<<h<<"-"<<e<<"="<<difference(h,e)<<endl;
   
    cout<<h<<"*"<<e<<"="<<product(h,e)<<endl;
  
    cout<<h<<"/"<<e<<"="<<quotient(h,e)<<endl;

    cout<<"You can continue to calculation. Enjoy it!\n";

  goto etiket1; // işlem sonunda başa dönebilmek için goto ifadesini kullandım//
  return 0;
}
