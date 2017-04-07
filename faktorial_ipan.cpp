#include <iostream>

using namespace std;
//prototype
int faktor(int n);	


int main()
{
	int n;
	
   cout<<" +------------------------------+";
   cout<<"\n | Nama   : irpan mulyana	|";  
   cout<<"\n | NIM    : 16.111.071		|"; 
   cout<<"\n | Kelas  : TIF RM-16 C		|"<<endl;
   cout<<" +------------------------------+"; 
   cout<<"\n | Program Menghitung Faktorial	|"; 
   cout<<"\n | Masukan angka positif >= 2	|"<<endl; 
   cout<<" +------------------------------+";   
   cout<<"\n 	Masukan Faktorial : "; cin>>n;
   cout<<endl;
   cout<<" +------------------------------+"; 
   cout<<"\n	Faktorial Anda    = "<<n<<endl; 
   cout<<"      "<<n<<"!=";
   cout<<" = "<<faktor(n);
   cout<<"\n +------------------------------+"; 
  
		 
	
		
		
		return 0;
		
	
}

int faktor(int n) 
{
	int hasil=1,i;		
	for(i=n;i>0;i--)
	{
		if(i!=1)
			cout<<i<<"*";
		else  
			cout<<"1";
			hasil=hasil*i;
			
				
	}
	return hasil;
	}
