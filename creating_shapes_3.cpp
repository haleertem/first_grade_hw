#include <iostream>
using namespace std;
int main()
{
  int k, l, m, n, row;
  cout << "Please enter a value:";
  cin >> row;
  for (k=1; k<=row; k++) 
  {
    for (l=3; l<=k; l=l+2)
    {
      cout <<"* ";
    } 
    for (m=row; (k%2!=0 && m>=k-2); m--)
    {
      cout << "- ";
    }
      for(n=row+2; (k%2==0 && n>=k) ; n--)
       {
        cout<<"  ";
       }
     for(n=2; n<=k; n=n+2)
       {
        cout<<" *";
       }
  cout << endl;
    }

}
