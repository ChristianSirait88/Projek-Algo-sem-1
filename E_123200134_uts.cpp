#include <iostream>
using namespace std;
int main()
{
    int pil1,a,b,c,complem,d;
    string pila,notasi,sifat;
	cout << "---------------------------------------------------"<<endl;
	cout <<"Nama : Christian"<<endl;
	cout <<"NIM : 123200134"<<endl;
	cout << "---------------------------------------------------"<<endl;
	cout<<endl;
	cout << "Program Menentukan Notasi,Sifat Warna,dan Perpaduan Warna Harmonis"<<endl;
	cout << "Warna -Warna : "<<endl;
	cout << "1. Orange              2. Red-Orange            3. Red "<<endl;
	cout << "4. Red-Violet          5. Violet                6. Blue-Violet "<<endl;
	cout << "7. Blue                8. Blue-Green            9. Green"<<endl;
	cout<< "10. Yellow-Green      11. Yellow               12. Yellow-Orange"<<endl;
	cout<<endl;
	cout<<"PIlihan Warna Nomor : ";
	cin >> pil1;
	cout<<endl;
	if (pil1==11 or pil1==3 or pil1==7) {
		notasi = "Primer";
	}
	else if (pil1==1 or pil1==9 or pil1==5) {
		notasi = "Sekunder";
	}
	else if (pil1==10 or pil1==12 or pil1==2 or pil1==4 or pil1 == 6 or pil1==8) {
		notasi = "Tersier";
	}
	else {
		cout << "Angka Salah"<<endl;
	}
	if (pil1>=1 && pil1<=6) {
		sifat= "Hangat";
	}
	else {
		sifat ="Sejuk";
	}
	cout<< "Notasi Warna : "<<notasi<<endl;
	cout<<"Sifat Warna : "<<sifat<<endl;
	cout<<"Perpaduan Warna Harmonis"<<endl;
	cout<<"a. Perpaduan Warna Analogous"<<endl;
	cout<<"b. Perpaduan Warna Complementary"<<endl;
	cout<<"c. Perpaduan Warna Split Complementary"<<endl;
	cout<<"d. Perpaduan Warna Triadic Complementary"<<endl;
	cout<<"e. Perpaduan Warna Tetrad Complementary"<<endl;
	cout <<"Pilihan : ";
	cin >>pila;
		if (pila== "a") {
			a = pil1-2; b = pil1-1; c = pil1+1; d = pil1+2;
			if(a<=0) a = a+12;
			if(b<=0) b = b+12;
			if(c>12) c = c-12;
			if(d>12) d = d-12;
			cout << "Perpaduan Warna Analogous dengan warna nomor : ";
			cout << a << "," << b << " atau " << b << "," << c << " atau " << c << "," << d; 
		}
		else if (pila== "b") {
			complem= pil1+6;
			if(complem>12) complem = complem-12;
			cout << "Perpaduan Warna Complementary dengan warna nomor : " << complem; 
		}
		else if (pila== "c") {
			a = pil1+5; b = pil1+7;
			if(a>12) a = a-12;
			if(b>12) b = b-12;
			cout << "Perpaduan Warna Split Complementary dengan warna nomor : ";
			cout << a << "," << b; 
		}
		else if(pila== "d") {
			a = pil1+4; b = pil1+8;
			if(a>12) a = a-12;
			if(b>12) b = b-12;
			cout << "Perpaduan Warna Triadic Complementary dengan warna nomor : ";
			cout << a << "," << b; 
		}
		else if (pila== "e") {
			a = pil1+3; b = pil1+6; c = pil1+9;
			if(a>12) a = a-12;
			if(b>12) b = b-12;
			if(c>12) c = c-12;
			cout << "Perpaduan Warna Tetrad Complementary dengan warna nomor : ";
			cout << a << "," << b<<","<<c; 
		}
		else {
			cout << "Angka Salah";
		}
}
