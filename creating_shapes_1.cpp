#include <iostream>
using namespace std;

int main()
{
  int row,k,l,m;
  cout<<"Please enter a value:"<<endl;
  cin>>row;
  
  for(int k=1; k<row; k++ )
  {
    for(int l=row; l>=k; l--)
    {
      cout<<"  ";
    }
         for(int m=1; m<=k; m++)
        {
         cout<<"*";
        }
    
    cout<<endl;
  }
  
  for(int k=1; k<=row; k++ )
  {
    for(int l=1; l<=k; l++)
    {
      cout<<"  ";
    }
     for(int m=row; m>=k; m--)
        {
         cout<<"*";
        }
    
    cout<<endl;

  }  
}
