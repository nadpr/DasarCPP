#include <bits/stdc++.h>
using namespace std;

int main (){
//variabel
	float dec=0, ambo = 0.0;
	int bin, bit;
	float exp = 0.0;
	
	cout << "=========== konversi bilangan biner ke desimal ===========\n";
//input
	cout<<"\nMasukan bilangan Biner : ";
	cin >> bin;
//proses
	while(bin)
	{
		bit = bin%10;
		if (bit != 0 && bit != 1)
		{
			ambo = 1 ;
		}
		bin = bin/10;
		dec = dec+bit*pow(2,exp);
		exp++ ;
	}
	if (ambo)
	     { 
	     cout << "\nBukan Biner\n";
	     }
	else { 
	     cout<<"\nBilangan Desimal dari"<< bin <<" adalah = "<< dec;
	     }
}
