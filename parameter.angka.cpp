#include <iostream>
  
using namespace std;
	
	//prototype
  
  void probaca ();
  int protambah () ;
  int prokurang() ;
  void protampil ();
  
  int a,b;
  
  //definisi global
	int main() {
	
	probaca ();
	protampil ();
	return 0;
	
	}
	
//proses membaca

	void probaca () {

	cout << "Masukan nilai A : ";
	cin>> a;
	cout << "Masukan nilai B : ";
	cin>> b;
	
	}
	
	
	//proses tambah
	int protambah () {
	
	return a + b;
	
	
	}
	
	//proses kurang
	int prokurang () {
		
		int hasil;
		hasil = a - b;
	
	return hasil;
	
	
	}
	
	//proses tampil
	
	void protampil () {
	
	cout << " Hasil Tambah : "<< protambah ()<<endl;
	cout << " Hasil Tambah : "<< prokurang ();
			
	}
			
			