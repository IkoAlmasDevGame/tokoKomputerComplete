#include <iostream>
#include <string>
using namespace std;

garis(){
	int max, i;
	string pilih = "-";
	max = 30;
	
	for(i=1; i <= max; i++){
		cout << pilih;
	}
	cout << endl;
}

int main(){
	string namaBarang,kodeBarang;
	int jumlah,kode,harga,bayar;
	int totbay,total,totPPn,kembalian;

	cout << "=== \t TOKO KOMPUTER Atau LAPTOP \t ===";
	cout << endl;
	cout << "List Merk Laptop atau Komputer : " << endl;
	cout << "1. Asus" << endl;
	cout << "2. Lenovo" << endl;
	cout << "3. MSI" << endl;
	cout << "4. Acer" << endl;
	cout << "5. HP" << endl;
	
	cout << "Pilih Kode (1/2/3/4/5) : "; cin >> kode;
	cout << endl;
	system("cls");
	
	switch(kode){
		case 1:
			cout << "pilih kode barang (A/B) : "; cin>>kodeBarang;
			if(kodeBarang == "A" || kodeBarang == "a"){
				namaBarang = "ASUS ROG Strix G G713IC-R735B6T-O";
				harga = 18160000;
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "ASUS VivoBook A516EPO-VIPS551";
				harga = 10099000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin>>jumlah;
			break;
			
		case 2:
			cout << "pilih kode barang (A/B) : "; cin>>kodeBarang;
			if(kodeBarang == "A" || kodeBarang == "a"){
				namaBarang = "LENOVO ThinkPad E14 Gen 2";
				harga = 18300000;
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "LENOVO IdeaPad 3 14ITL6";
				harga = 13419000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin>>jumlah;
			break;
			
		case 3:
			cout << "pilih kode barang (A/B) : "; cin>>kodeBarang;
			cout << endl;
			if(kodeBarang == "A" || kodeBarang == "a"){
				namaBarang = "MSI Prestige 14 A11SCX";
				harga = 20181000;
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "MSI Bravo 15 B5DD";
				harga = 12000000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin>>jumlah;
			break;
			
		case 4:
			cout << "pilih kode barang (A/B) : "; cin>>kodeBarang;
			cout << endl;
			if(kodeBarang == "A" || kodeBarang == "a"){
				namaBarang = "";
				harga = 21942000;
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "";
				harga = 12500000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin>>jumlah;
			break;
		
		case 5:
			cout << "pilih kode barang (A/B) : "; cin>>kodeBarang;
			if(kodeBarang == "A" || kodeBarang == "a"){
				namaBarang = "HP Pavilion Gaming Laptop 15-ec2047AX";
				harga = 12300000;
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "HP Pavilion x360 2-in-1 Convertible 14-ek0113TU";
				harga = 10900000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin>>jumlah;
			break;
		
		default:
			cout << "tidak ada kode yang dipilih" << endl;
			system("exit");
		return 0;	
	}
	
	if(jumlah > 1){
		total = harga * jumlah;
		totPPn = total * 10 / 100;
	}else{
		total = harga * jumlah;
	}
	
	totbay = total + totPPn;
	
	cout << "=================================================" << endl;
	cout << "=== \t TOKO KOMPUTER Atau LAPTOP \t ===" << endl;
	cout << "Kode Yang Di Pilih\t\t : " << kode << endl;
	cout << "Kode Barang Yang Di Pilih\t : " << kodeBarang << endl;
	cout << "=================================================" << endl;
	cout << "Nama Barang\t : " << namaBarang << endl;
	cout << "Hrga Barang\t : Rp. " << harga << endl;
	cout << "Jumlah Beli\t : " << jumlah << endl;
	cout << "Total Bayar\t : Rp. " << totbay << endl;
	cout << "Pembayaran\t : Rp. "; cin >> bayar;
	kembalian = bayar - totbay;
	cout << "uang kembalian\t : Rp. " << kembalian << endl;
	cout << "=================================================" << endl;
	cout << "Terima Kasih Sudah ber-belanja di tempat kami ..." << endl;
	cout << "=================================================" << endl;
	return 0;
}
