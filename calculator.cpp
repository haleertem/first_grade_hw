#include <iostream>
using namespace std; 

int main() {
  int w,h,e;
  cout<< "Please select the action you want to do:\n";
  cout<<"1)Subtraction\n";
  cout<<"2)Addition\n";
  cout<<"3)Multiplication\n";
  cout<<"4)Modulo\n";
  cout<<"5)Division\n";
  cin>> w;
  cout<<"Please type the first number:\n";
  cin>> h;
  cout<<"Please type the second number:\n";
  cin>> e;
  if (w==1){
   int sum=h-e;
  cout<<"Result= "<<sum;}
  if (w==2){
   int  sum=h+e;
    cout<<"Result= "<<sum;}
  if (w==3){
   int sum=h*e;
  cout<<"Result= "<<sum;}
  if (w==4){
  int sum=h%e;
  cout<<"Result= "<<sum;}
 if (w==5){
   float sum=float(h)/float(e);
  cout<<"Result= "<<sum;} 
  }
  //Hafize Hale Ertem
