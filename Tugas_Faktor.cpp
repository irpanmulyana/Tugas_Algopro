#include <iostream>
using namespace std;
//variable global
  int b;
//prototype disimpan diatas agar semua dapat mengetahui ada nya program pemfaktoran untuk dipanggil
int faktor (int b);
//Program Utama
int main () {
  cout << "Bilangan yang akan difaktorkan :"; cin >> b;//inputan angka yang akan di faktorialkan
  cout << "Faktorial dari "<<b<<" adalah: ";
  cout <<faktor(b);
return 0;
}
//program faktorial
int faktor (int b) {
  int a=1;
  for (int c=b;c!=0;c--) {
    cout << c;
    a=a*c; //perkalian
    if (c!=1)
    cout << "x";
    else cout << "=";
}
return a;
}
