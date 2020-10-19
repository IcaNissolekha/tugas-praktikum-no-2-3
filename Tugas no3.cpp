/*program menghitung segitiga*/
/*ica nissolekha*/
/*20051397064*/
/*2020b*/


#include <iostream>
#include<math.h>
using namespace std;
int main()

{
	int alas,tinggi,sisimiring,luas,keliling;
	string pagar= "======================================================================================================================";
	
	cout<<"--------------";
	cout<<"PROGRAM MENGHITUNG SEGITIGA";
	cout<<"--------------"<<endl;
	
	cout<<endl;
	cout<<"MEMASUKKAN DATA YANG ANDA KETAHUI"<<endl<<endl;
	cout<<"masukkan data alas          ="; cin>>alas;
	cout<<"masukkan data tinggi        ="; cin>>tinggi;
	cout<<pagar<<endl;
	
	
	sisimiring = sqrt((alas*alas)+(tinggi*tinggi));
	luas       = (alas*tinggi)/2;
	keliling   = alas+tinggi+sisimiring;
	
	
	cout<<pagar<<endl;
	cout<<"HASIL PERHITUNGAN ANDA"<< endl;
	cout<<"sisi mirig segitiga         =" << sisimiring<<endl;
	cout<<"luas       segitiga         =" <<luas<<endl;
	cout<<"keliling   segitigas        =" <<keliling<<endl;
	cout<< pagar << endl << endl << endl;  
	cout<<"TERIMAKASIH TELAH MEMPERCAYAI KAMI" <<endl;
	
	return 0;   	
}

