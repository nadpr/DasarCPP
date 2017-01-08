#include <bits/stdc++.h>
using namespace std;

int desimal,i=0,x[100];

void konversi_biner(int nilai){
	int hasil_bagi=nilai;
	int sisa_bagi;
	while(hasil_bagi !=0){
		sisa_bagi=hasil_bagi % 2;
		x[i]=sisa_bagi;
		hasil_bagi = hasil_bagi / 2;
		i++;
	}
}
void tampil(){
	for(int j=i-1;j>=0;j--){
		cout << x[j] << " ";
	}
}
int main(){
	cout << "Masukkan bilangan desimal = "; cin >> desimal;
	konversi_biner(desimal);
	cout << "Bilangan biner dari " <<desimal<< " adalah = ";
	tampil();
}
