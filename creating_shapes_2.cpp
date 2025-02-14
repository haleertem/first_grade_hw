#include <iostream>
using namespace std;

int main()
{
  int row,k,l,m;
  cout<<"Please enter a value:"<<endl;
  cin>>row;
  
  for(k=1; k<=row; k++)
  { 
    if(k%4==1){
      cout<<"   ******";
    }
      if(k%4==2){
        cout<<" **********"; 
      }
        if(k%4==3){
          cout<<"************"; 
        }
         if(k%4==0){
           cout<<" **********"; 
           }
    cout<<endl;
  }    
   
  
}
