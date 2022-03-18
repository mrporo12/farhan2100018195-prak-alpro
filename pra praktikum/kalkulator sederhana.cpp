#include <iostream>
using namespace std;

int tambah(int x, int y){
	int hasil = x + y;
	return hasil;
}
int kurang(int x, int y){
	int hasil = x - y;
	return hasil;
}
int kali(int x, int y){
	int hasil = x * y;
	return hasil;
}
int bagi(int x, int y){
	int hasil = x / y;
	return hasil;
}

int main(){
	int pilih,x,y;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Pilihan Menu :"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Pilih Menu No : "; cin>>pilih;
	cout<<"Bilangan Pertama : "; cin>>x;
	cout<<"Bilangan Kedua : "; cin>>y;
	if(pilih == 1){
		cout<<"Hasil "<<x<<" + "<<y<<" = "<<tambah(x,y);
	}
	if(pilih == 2){
		cout<<"Hasil "<<x<<" - "<<y<<" = "<<kurang(x,y);
	}
	if(pilih == 3){
		cout<<"Hasil "<<x<<" x "<<y<<" = "<<kali(x,y);
	}
	if(pilih == 4){
		cout<<"Hasil "<<x<<" : "<<y<<" = "<<bagi(x,y);
	}
	return 0;
}
