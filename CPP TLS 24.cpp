//Big Scene TLS : Pemrograman
//Billing Warnet
#include <iostream>
#include <string>

using namespace std;
	
	int jam,byr,kom,uang,kembalian;
	int total = 0;
	string pkt,plh;
	int rumus() {
	return  total = total+ byr; 
	}
	
	int main (){
	
		cout <<"\t-------HALO SELAMAT DATANG-------"<< endl;
		cout << "\n\tini adalah pilihan paket"<< endl;
		cout << "\t1. 1 jam      	 	= 4000 "<< endl;
		cout << "\t2. 2 jam      		= 8000"<< endl;
		cout << "\t3. 3 jam      	 	= 12000"<< endl;
		cout << "\t4. 4 jam      	 	= 17000"<< endl;
		cout << "\t5. tambahan perjam 	= 3000/jam"<< endl<< endl;
		cout << "masukan jumlah komputer yang mau di aktifkan = ";cin >> kom;
		
		for (int b=1;b<=kom;b++){
			do{ // disini kami meletakkan do karna akan melooping jika salah pengisian
				cout << "komputer "<< b<< endl;
				cout << "jenis paket = ";cin >> pkt;
				 	if (pkt =="1"){
						byr = 10000;
					}else if (pkt =="2"){
						byr = 17000;
					}else if (pkt =="3"){
						byr = 20000;
					}else if (pkt=="4"){
						byr =17000;
					}else if (pkt=="5"){
						int jm;
						cout << "main berapa jam : ";cin >> jm;
						for (int j=1; j<=jm; j++) {
							byr =3000*jm;
						}
					}else {
						cout << "paket tidak tersedia "<< endl;
					}
			}while(pkt < "1" or pkt > "5");
			rumus();
		}
		cout << "\ntotal semua nya = "<< total<< endl;
		cout << "masukan uang = ";cin >> uang;
		cout << endl;
			kembalian = uang - total;
		cout << "kembaliannya = "<< kembalian;
			
	
return 0; 
}

