/* Hafize Hale Ertem 16.03.2023 Lab Assignment #1 */
#include <iostream>
using namespace std;
int main() {
  int val;
  int myArray[10]; /*10 elemanlık array tanımladım*/
  int *ptr =
      myArray; /*ilk elementin adresini işaret eden pointer ı tanımladım*/

  cout << "Please enter ten integers:";
  for (int i = 0;
       i < 10; /*for döngüsüyle kullanıcıdan array elemanlarını aldım*/
       i++) {
    cin >> myArray[i];
  }

  cout << " myArray's elements: ";
  for (int i = 0; i < 10; i++) {
    cout << myArray[i] << ",";
  }
  cout << endl;
  /* nested loop kullanarak elemanların büyük olanlarıyla küçük olanlarını
    kıyaslayıp değerlerini birbirleriyle değiştirerek büyük olanları en başa
    aldım */
  for (int k = 0; k < 10; k++) {
    for (int l = 0; l < 10; l++) {
      if (ptr[l] < ptr[l + 1]) {

        val = ptr[l + 1];
        ptr[l + 1] = ptr[l];
        ptr[l] = val;
      }
    }
  }
  /* elemanları büyükten küçüğe ekrana yazdırdım */
  cout << " The array elements in descending order" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << myArray[i] << ",";
  }
  return 0;
}
