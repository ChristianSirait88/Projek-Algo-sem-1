#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int ceil(double x){
    int a;
    double c;
    a=x;
    c=(x-a);
    if (c>=0.5)
    {
        return a+1;
    }
    else
    {
        return a;
    }
 
}
int main ()
{
	string pil3,kode,user,pil1,pil2,nama,name,pass;
	int jum=0;
	double x;
	long kome,buy,psc,totbi,total,jumbar,kemb,kurang,diskon;
	long bayar;
	awal:
    cout <<"================================="<<endl;
	cout <<"Kasir Family Catering Taman Siswa"<<endl;
    cout <<"================================="<<endl;
	cout<<"Username : ";
	cin >> user;
	cout <<"Password : ";
	cin >>pass;
	if (user =="admin" && pass=="admin") {
		transaksi:
		cout << "Selamat anda berhasil login"<<endl;
		system("cls");
		cout <<"================================="<<endl;
	    cout <<"Kasir Family Catering Taman Siswa"<<endl;
        cout <<"================================="<<endl;
		cout<< "Masukan Nama Pembeli : ";
		cin.ignore();
		getline(cin,nama);
		cout <<"Masukan Kode Transaksi : ";
		cin>>kode;
		cout<<"Jumlah Beli Menu : ";
		cin >> jum;
		cout <<"Menu"<<endl;
		cout<<"=================================================================\n";
        cout<<"| ID Menu |        Nama Menu        | Harga Per pcs|"  <<endl;
        cout<<"=================================================================\n";
        cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"001"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Menu Set Reguler"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 65.000,00"<<"|"<<endl;
        cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"002"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Menu Set Premium"<<"|";
       cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 45.000,00"<<"|"<<endl;
       cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"003"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Beef Cutlet Set"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 60.000,00"<<"|"<<endl;
        cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"005"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Happy Kids Meal"<<"|";
       cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 40.000,00"<<"|"<<endl;
       cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"006"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Vegetarian Set"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 80.000,00"<<"|"<<endl;
        cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"007"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Chocolicious Drink Set"<<"|";
       cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 15.000,00"<<"|"<<endl;
       cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"008"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Fresh Fruit Drink Set"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 15.000,00"<<"|"<<endl;
        cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"009"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Salad"<<"|";
       cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 20.000,00"<<"|"<<endl;
       cout<<"|"<<setiosflags(std::ios::left)<<setw(9)<<"010"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(24)<<"Mini Dessert Set"<<"|";
        cout<<" "<<setiosflags(std::ios::left)<<setw(5)<<"Rp. 25.000,00"<<"|";
       cout<<"\n=======================================================\n";
       cout <<endl;
       {
		   for (int i =0 ; i < jum; i++) {
				 cout <<"Menu ke-"<<i+1<<endl;
				 cout << "Kode Menu : ";
				 cin >>kome;
				 cout << "Nama Menu : ";
				 cin.ignore();
				 getline(cin,name);
				 cout << "Jumlah Pembelian : ";
				 cin >> buy;
				 cout << "Harga per psc : ";
				 cin >> psc;
				 total=psc*buy; 
				 cout << "Total : "<<total<<endl;
				 cout <<endl;
				 cout <<endl;
				 	  totbi+=total;
				  }
				  {
				 cout<<"---------------------------------------------------------"<<endl;
				 cout << "Struk Kasir Family Catering Taman Siswa"<<endl;
				 cout << "Kode Transaksi   : "<< kode<<endl;
				 cout << "Nama Pembeli     : "<<nama<<endl;
				 cout<<"---------------------------------------------------------"<<endl;
				 cout <<"Total Biaya                : "<<totbi<<endl;
				 if (totbi>=500000) {
					 x=totbi/500000;
					 diskon = totbi*0.02*ceil(x);
				 }
				 else {
					 diskon = 0;
					 x=0;
				 }
				 cout <<"Repetasi Diskon            : "<<ceil(x)<<endl;
				 cout <<"Diskon 2% /500k            : "<<diskon<<endl;
				 bayar=totbi-diskon;
				 cout <<"Total Bayar                : "<<bayar<<endl;
				 cout<<endl;
			 }
			 kembalian:
			 cout<< "Jumlah Pembayaran : ";
			 cin >>jumbar;
			 kemb=jumbar-bayar;
			 if (kemb>=0) {
				 cout <<"Kembalian : "<<kemb<<endl;
				 cout <<endl;
				 cout << "Apakah Anda ingin Membeli Lagi y/n? : ";
				 cin >>pil3;
				 if (pil3=="y"){
					 goto transaksi;
				 }
				 else {
					 return 0;
				 }
			 }
			 else {
				 kurang=bayar-jumbar;
				 cout << "Uang Anda kurang : "<<kurang<<endl;
				 cout <<"Apakah Anda Ingin Mengulang Transaksi y/n : ";
				 cin >>pil2;
				 if (pil2=="y"){
					 goto kembalian;
				 }
				 else if (pil2=="n"){
					 return 0;
				 }
			 }
	}
	}
	else  {
		cout << endl;
		cout<<"Username Atau Password Anda Salah"<<endl;
		cout <<"Apakah Anda Ingin Mengulang Login y/n : ";
		cin >>pil1;
		if (pil1=="y") {
			system("cls");
			goto awal;
		}
		else  {
			return 0;
		}
	}
}
