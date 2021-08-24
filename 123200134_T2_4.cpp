 #include <iostream>
using namespace std;
int main () 
{
 int siswa ;
 int  guru ;
 int pilih ;
 long total = 0;
 int pilihan;
 cout << "--------------------" << endl;
 cout << "Biaya Kuota Kemendikbud" << endl;
 cout << "--------------------" << endl;
 cout << endl;
 cout << "Pilih Penerima Bantuan"<< endl ;
 cout << "jika Murid  Ketik 1 " << endl ;
 cout << "Jika Pengajar Ketik 2 " << endl ;
 cout << "Pilihan :" ;
 cin >> pilih ;
 cout << "Pilih Instansi: " << endl ;
 cout << "Jika PAUD Ketik 1" << endl ;
 cout << "Jika SD Ketik 2"<< endl ;
 cout << "Jika SMP Ketik 3" << endl ;
 cout << "Jika SMA Ketik 4 " << endl ;
 cout << "Jika Perguruan Tinggi Ketik 5" << endl ;
 cout<<"Pilihan : ";cin >> pilihan;
 if (pilih == 1 && pilihan ==1 ) {
 cout << "Jumlah Siswa : " ;
 cin >> siswa ;
 cout <<  "Total Biaya  : Rp" ;
 total = siswa*20*6000;
 cout << total << endl;
}
else if (pilih == 2 && pilihan ==1 ) {
 cout << "Jumlah Guru  :" ;
 cin >> guru ;
 cout <<  "Total Biaya  : Rp" ;
 total = guru*42*6000;
 cout << total << endl;
}
else if (pilih == 1 && pilihan == 2) {
cout << "Jumlah Siswa : " ;
 cin >> siswa ;
 cout <<  "Total Biaya  : Rp" ;
 total = siswa*35*6000;
 cout << total << endl;
}
else if (pilih == 2 && pilihan ==2 ) {
 cout << "Jumlah Guru  :" ;
 cin >> guru ;
 cout <<  "Total Biaya  : Rp" ;
 total = guru*42*6000;
 cout << total << endl;
}
else if (pilih ==1 && pilihan == 3) {
cout << "Jumlah Siswa : " ;
 cin >> siswa ;
 cout <<  "Total Biaya  : Rp" ;
 total = siswa*35*6000;
 cout << total << endl;
}
else if (pilih == 2 && pilihan ==3 ) {
 cout << "Jumlah Guru  :" ;
 cin >> guru ;
 cout <<  "Total Biaya  : Rp" ;
 total = guru*42*6000;
 cout << total << endl;
}
else if (pilih == 1 && pilihan == 4) {
cout << "Jumlah Siswa : " ;
 cin >> siswa ;
 cout <<  "Total Biaya  : Rp" ;
 total = siswa*35*6000;
 cout << total << endl;
}
else if (pilih == 2 && pilihan ==4 ) {
 cout << "Jumlah Guru  :" ;
 cin >> guru ;
 cout <<  "Total Biaya  : Rp" ;
 total = guru*42*6000;
 cout << total << endl;
}
else if (pilih == 1 && pilihan == 5) {
cout << "Jumlah Mahasiswa : " ;
 cin >> siswa ;
 cout <<  "Total Biaya      : Rp" ;
 total = siswa*50*6000;
 cout << total << endl;
}
else if (pilih == 2 && pilihan ==5 ) {
 cout << "Jumlah Dosen  :" ;
 cin >> guru ;
 cout <<  "Total Biaya  : Rp" ;
 total = guru*50*6000;
 cout << total << endl;
}
else {
	cout << "Pilihan Tidak Tersedia" << endl ;
}
}
