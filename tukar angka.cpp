#include <iostream>
  
using namespace std;
	//prototype
  
  void probaca ();
  void protukar();
  void protampil ();
  
  int a,b, temp;
  
  //definisi global
	int main() {
	
	probaca ();
	protukar ();
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
	
	
	//proses tukar
	
	void protukar () {
	temp = b;
	b = a;
	a = temp;
	
	}
	
	//proses tampil
	
	void protampil () {
	
	cout << "=================="<<endl;
	cout << "Nilai A sekarang : " <<a<< endl;
	cout << "Nilai A sekarang : " <<b;
			
			}
			
			