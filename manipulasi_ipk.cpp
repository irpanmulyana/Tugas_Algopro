#include <iostream>
  
using namespace std;

	//prototype
	
	void probaca ();
	void protampil ();
	
	

	//definisi global
	float ip[100], tertinggi=0, terendah=4, sum_ip=0;
	int lulus=0, gagal=0, error_kebawah=0, error_keatas=0;
	int i=1, pembagi;


	//program utama
	int main () 
	{
		
	probaca ();
	protampil ();		
		
		return 0;
		}
			
	//proses membaca ipk yg di input

	void probaca () 
	{
		cout<<"\n______Program Perhitungan Data IPK Mahasiswa______";
		cout<<"\n____Inputkan Data IPK dengan range 0.0 s/d 4.0____";
		cout<<"\n_____Min data yang di inputkan adalah 2 nilai_____"<<endl;
		cout<<"\n__Ketikan -999 bila sudah selesai menginput data__"<<endl<<endl;

	while (ip[i-1] != -999) 
	{
        cout<<"Mahasiswa/i ke : "<<i<<"\n";
		cout<<"Input Nilai    = ";
        cin>>ip[i];
		
		
		if(ip[i]>=0 && ip[i]<=4){ //ipk > atau = 2.75 dinyatakan lulus
			if(ip[i]>=2.75){
				lulus++;	
			}
			else if(ip[i]<2.75){ //ipk > atau = 2.75 dinyatakan lulus
				gagal++;	
			}
			
			if (ip[i] > tertinggi){ tertinggi = ip[i]; }
			if (ip[i] < terendah){ terendah = ip[i]; }
			
			sum_ip+=ip[i];
			pembagi	=	i; //pembagi dibatas atas dasar kelompok ip dalam range 1-4
		}
		else if(ip[i] < 0 || ip[i] > 4){
			/* Pembatasan rentangan angka margin error 
			 * dari 10 s/d -1 dan dari 5 s.d 10		
			 */
			if(ip[i] > -11 && ip[i] < 1){
				error_kebawah++;	
			}
			else if(ip[i] > 4 && ip[i] < 11){
				error_keatas++;	
			}
		}
		
		i++;
    }
	
	}
	
	
	void protampil () 
 {
	float rata 		= (sum_ip/pembagi);
	int jml_m		= i-2; //2 digunakan agar jumlah mahasiswa tidak termasuk terminator (-999)
	int error		= error_kebawah + error_keatas;
	
        
	cout<<endl;
		cout<<"*===================================================*"<<endl<<endl;
    if(i!=1){ //cek jumlah i
		cout<<"==============TAMPILAN HASIL INPUTAN=================="<<endl<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|1. Jumlah Mahasiswa                       |   "<<jml_m<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|2. Jumlah Mahasiswa Yang Lulus            |   "<<lulus<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|3. Jumlah Mahasiswa Yang Tidak Lulus      |   "<<gagal<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|4. Nilai Tertinggi                        |   "<<tertinggi<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|5. Nilai Terendah                         |   "<<terendah<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|6. Nilai Rata-Rata                        |   "<< rata<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"|7. Data error (angka tidak sesuai syarat) |   "<<error<<"     |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl<<endl<<endl;
		cout<<"--------------------TUGAS ALGOPRO--------------------"<<endl<<endl;
		cout<<"--------------- Nama : irpan mulyana ----------------"<<endl<<endl;
		cout<<"--------------- NIM  : 16.111.071     ----------------"<<endl<<endl;
		cout<<"--------------- Kelas: TIF Rm-16 C     ----------------"<<endl<<endl;
		
		
	}
	else {
		cout<<"Tidak Ada Data";
	}
    
	}			