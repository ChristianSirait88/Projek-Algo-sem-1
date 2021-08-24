#include <iostream>
#include <iomanip>
using namespace std;
int floor(double x){
    int Z;
    Z=x;
    return Z;
 }
void welcome();
void judul();
int main ()
{
	string a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	string p,q,r,s,t,u,v,w,x,y,z,A,B,C,D;
	string nama,tanggal,pil1[10];
	string id[10] = {"1","2","3","4","5","6","7","8","9","10"};
	string nor[5][3] = {{"101","102","103"},{"201","202","203"},{"301","302","303"},{"401","402","403"},{"501","502","503"}};
	string kamar[5][3]= {{"Puntadewa","Srikandi","Nakula"},{"Ir.Soekarno","Laksamana Maeda","Moch. Hatta"},{"Prof. Habibie","R.A. Kartini","Ki Hadjar Dewantara"},{"Nelson Mandela","Bill Clinton","Immanuel Kant"},{"Leonardo da Vinci","Ludwig Bethouven","Fred Astaire"}};
	string sewa[5][3] = {{"2500000","3000000","7500000"},{"4500000","1000000","2500000"},{"1500000","2500000","3500000"},{"12500000","20000000","25000000"},{"6000000","3000000","4500000"}};
	string kapat[5][3] = {{"40","30","75"},{"40","20","15"},{"15","30","20"},{"100","100","100"},{"30","25","35"}};
	string fasit[10]={"Food & Beverage","MC","Band","Operator","Decoration","Security","Documentation","Staff Personel","Souvenir","Full Service"};
	string uang[10] ={"2500000","3000000","15000000","2500000","10000000","20000000","2500000","2000000","25000000","75000000"};
	long kemb,bayar,sum,diskon,total,harga;
	long bb,cc,mm,ee,ff,gg,hh,ii,jj,kk,ll,nn,oo;
	int hf[10],pil[10];
	int room;
	double Z;
	bb=3000000;cc=7500000;ee=1000000;ff=3500000;
	gg=12500000;hh=20000000;ii=25000000;jj=6000000;kk=75000000;ll=10000000;mm=1500000;
	nn=15000000;oo=2000000;
	a="O";b="O";c="O";d="O";e="O";f="O";
	g="O";h="O";i="O";j="O";k="O";l="O";
	m="O";n="O";o="O";
	p="-";q="-";r="-";s="-";t="-";u="-";v="-";w="-";x="-";y="-";z="-";A="-";B="-";C="-";D="-";
	judul();
	welcome();
	system("pause");
	system("cls");
	awal:
	judul();
	cout <<"ADMINISTRATION MENU\n";
	cout <<"1. Display Building\n";
	cout <<"2. Display Room\n";
	cout <<"3. Display Facilities\n";
	cout <<"4. Input Transaction\n";
	cout <<"5. Discharge Room\n";
	cout <<"Selection  : ";
	cin >>pil[0];
	if (pil[0]==1) {
	system("cls");
	judul();
	cout <<"Menu 1 : Display Building Status\n";
	cout <<"----------------------------------------------------\n";
	cout <<"Keterangan : \n";
	cout <<"O : Avilable \n";
	cout <<"X : Booked\n";
	cout <<endl;
	cout <<"          "<<"-1-"<<"  "<<"-2-"<<"  "<<"-3-"<<endl;
	cout <<"|  1  |"<<"    "<<a<<"    "<<b<<"    "<<c<<"    "<<endl;
	cout <<"|  2  |"<<"    "<<d<<"    "<<e<<"    "<<f<<"    "<<endl;
	cout <<"|  3  |"<<"    "<<g<<"    "<<h<<"    "<<i<<"    "<<endl;
	cout <<"|  4  |"<<"    "<<j<<"    "<<k<<"    "<<l<<"    "<<endl;
	cout <<"|  5  |"<<"    "<<m<<"    "<<n<<"    "<<o<<"    "<<endl;
	cout <<"Display Building Based on the Transaction Data (y/n) : ";
	cin >>pil1[0];
	if (pil1[0]=="y"|| pil1[0] == "Y") {
		system("cls");
		judul();
		cout <<"Menu 1 : Display Building Status\n";
		cout <<"Based on ID Transaction\n";
		cout <<"----------------------------------------------------\n";
		cout <<"Keterangan : \n";
		cout <<"- : There is no Transaction\n";
		cout <<"          "<<"-1-"<<"  "<<"-2-"<<"  "<<"-3-"<<endl;
		cout <<"|  1  |"<<"    "<<p<<"    "<<q<<"    "<<r<<"    "<<endl;
		cout <<"|  2  |"<<"    "<<s<<"    "<<t<<"    "<<u<<"    "<<endl;
		cout <<"|  3  |"<<"    "<<v<<"    "<<w<<"    "<<x<<"    "<<endl;
		cout <<"|  4  |"<<"    "<<y<<"    "<<z<<"    "<<A<<"    "<<endl;
		cout <<"|  5  |"<<"    "<<B<<"    "<<C<<"    "<<D<<"    "<<endl;
		cout <<"===============================\n";
		cout <<"Back to Menu ? (y/n) : ";
		cin>>pil1[7];
		if (pil1[7]=="y" || pil1[7]=="Y") {
			system ("cls");
			goto awal;
		}
		else {
			return 0;
		}
	}
	else {
		system("cls");
		goto awal;
	}
}
else if (pil[0]==2) {
	system("cls");
	judul();
	cout <<"Menu 2 : Display Room Data\n";
	cout <<"----------------------------------------------------\n";
		for (int yt =0;yt<=4;yt++) {
			cout <<"Lantai "<<yt+1<<endl;
			cout <<"----------------------------------------------------\n";
			for (int ax=0;ax<=2;ax++){ 
				cout<<" Room Number               : "<<nor[yt][ax]<<endl;
				cout<<" Name                      : "<<kamar[yt][ax]<<endl;
				cout<<" Price                     : "<<sewa[yt][ax]<<" IDR (Rp) / hours\n";
				cout<<" Capacity                  : "<<kapat[yt][ax]<<endl;
				cout <<endl;
				cout <<"----------------------------------------------------\n";
			}
		}
	cout <<"===============================\n";
	cout <<"Back to menu ? (y/n) : ";
	cin >>pil1[1];
	if (pil1[1]=="y"||pil1[1]=="Y") {
		system("cls");
		goto awal;
	}
	else {
		return 0;
	}
}
else if (pil[0]==3) {
	system("cls");
	judul();
	cout <<"Menu 3 : Display Facilities Data\n";
	cout <<"----------------------------------------------------\n";
	for (int ab = 0 ;ab<=9;ab++){
	cout <<"Facilities ID    : "<<ab+1<<endl;
	cout <<"Name             : "<<fasit[ab]<<endl;
	cout <<"Price            : "<<uang[ab]<<"IDR (Rp) / set"<<endl;
	cout <<endl;
	cout <<"----------------------------------------------------\n";
}
	cout <<"===============================\n";
	cout <<"Back to Menu ? (y/n) : \n";
	cin >>pil1[2];
	if (pil1[2]=="y"||pil1[2]=="Y") {
		system("cls");
		goto awal;
	}
	else {
		return 0;
	}
}
else if (pil[0]==4) {
	system("cls");
	judul();
	cout <<"Menu 4 : Transaction\n";
	cout <<"----------------------------------------------------\n";
	cout <<endl;
	cout <<"                                     Room                                            \n";
	cout<<"=================================================================\n";
	cout<<"|No. |        Name         |Price (IDR/hour) |Capacity|"  <<endl;
	cout<<"=================================================================\n";
	for (int er =0;er<=4;er++) {
		cout<< "Lantai "<<er+1<<endl;
		cout<<"----------------------------------------------------------------\n";
		for (int dc=0;dc<=2;dc++){
			cout<<"|"<<setiosflags(std::ios::left)<<setw(4)<<nor[er][dc]<<"|"<<" "<<setiosflags(std::ios::left)<<setw(20)<<kamar[er][dc]<<"|"<<" "<<setiosflags(std::ios::left)<<setw(16)<<sewa[er][dc]<<"|"<<" "<<setiosflags(std::ios::left)<<setw(8)<<kapat[er][dc]<<endl;
			cout <<"----------------------------------------------------------------\n";			
		}
	}
	cout<<"                      Daftar Fasilitas                                                                         \n" ;  
	cout<<"=================================================================\n";
	cout<<"|ID Fasilitas|     Name      |Harga / Set|"  <<endl;
	cout<<"=================================================================\n";
	for (int ds=0;ds<=9;ds++) {
		cout<<"|"<<setiosflags(std::ios::left)<<setw(12)<<id[ds]<<"|"<<" "<<setiosflags(std::ios::left)<<setw(15)<<fasit[ds]<<"|"<<" "<<setiosflags(std::ios::left)<<setw(10)<<uang[ds]<<"|"<<endl;
		cout <<"----------------------------------------------------------------\n";
	}
	cout <<"Each Transaction Only for 1 Room\n";
	cout <<"How Many Transaction : ";
	cin>>pil[1];
	system("cls");
	judul();
	for(int aa =1; aa<=pil[1];aa++){
		cout <<"Transaction -"<<aa<<endl;
		cout <<"Transaction ID         : ";
		cin >>pil1[8];
		cin.ignore();
		cout <<"Name                   : ";
		getline(cin,nama);
		cout <<"Schedule               : ";
		getline(cin,tanggal);
		cout <<"----------------------------------------------------\n";
		cout<<"Select  Room (NO)      : ";
		cin>>pil[3];
		if ((pil[3]==101 && a=="O")|| (pil[3]==203 && f=="O")  || (pil[3]==302 && h=="O")) {
			room=2500000;
		}
		else if ((pil[3]==102 && b=="O") || (pil[3]==502 && n=="O")) {
			room=3000000;
		}
		else if (pil[3]==103 && c=="O") {
			room=cc;
		}
		else if ((pil[3]==201 && d=="O") || (pil[3]==503 && o=="O")){
			room=4500000;
		}
		else if (pil[3] == 202 && e=="O"){
			room=ee;
		}
		else if (pil[3]==301 && g=="O"){
			room=mm;
		}
		else if ( pil[3]==303 && j=="O") {
			room=ff;
		}
		else if(pil[3]==401 && j=="O") {
			room=gg;
		}
		else if (pil[3]==402 && k=="O") {
			room=hh;
		}
		else if (pil[3]==403 && l=="O") {
			room=ii;
		}
		else if(pil[3]==501 && m=="O"){
			room=jj;
		}
		else {
			cout <<"Room Number Invalid or Already Booked\n";
			cout <<"Please Re-Input Your Transaction\n";
			cout<<"=================================\n";
			cout <<"Back to Menu ? (y/n) : ";
			cin >>pil1[6];
			if(pil1[6]=="y"||pil1[6]=="Y"){
				system("cls");
				goto awal;
			}
		}
		cout <<"----------------------------------------------------\n";
		cout<<"How Many Facilities?   : ";
		cin >>pil[4];
		for(int ab =1;ab<=pil[4];ab++){
			cout <<"Select Facilities (ID) : ";
			cin>>hf[ab];
			if (hf[ab]==1 ) { 
				harga=2500000;
			}
			else if (hf[ab]==4 ) {
				harga=2500000;
			}
			else if (hf[ab]==7) {
				harga=2500000;
			}
			else if (hf[ab]==2) {
				harga=bb;
			}
			else if (hf[ab]==3){
				harga=nn;
			}
			else if (hf[ab]==5){
				harga=ll;
			}
			else if (hf[ab]==6) {
				harga=hh;
			}
			else if(hf[ab]==8){
				harga=oo;
			}
			else if (hf[ab]==9){
				harga=ii;
			}
			else if (hf[ab]==10){
				harga=kk;
			}
			else {
				cout <<"Invalid Facilities ID\n";
				cout <<"Back to Menu ? (y/n) : ";
				cin>>pil1[8];
				if(pil1[8]=="y" || pil1[8]=="Y"){
					system("cls");
					goto awal;
				}
				else {
					return 0;
				}
			}
			total+=harga;
		}
	
	cout <<"----------------------------------------------------\n";
	cout<<"Total Room Price       : "<<room<<endl;
	cout<<"Total Facilities Price : "<<total<<endl;
	sum=room+total;
	cout<<"Total Payment          : "<<sum<<endl;
	system("pause");
	cout<<"=================================\n";
	cout<<"Total Payment          : "<<sum<<endl;
	Z=sum/1000000;
	cout <<"Discount Repetation    : "<<floor(Z)<<endl;
	diskon=(sum*0.02)*floor(Z);
	cout<<"Discount 2% (1000000)  : "<<diskon<<endl;
	cout<<"Total Payment After Discount :  "<<sum-diskon<<endl;
	cout <<"----------------------------------------------------\n";
	cout <<"Money Paid   : ";
	cin >>bayar;
	kemb=bayar-(sum-diskon);
	cout<<"Change           : "<<kemb<<endl;
	cout<<"=================================\n";
	cout<<"=================================\n";
}
	cout <<"Back to Menu? (y/n) : ";
	cin>>pil1[3];
	if (pil1[3]=="y"|| pil1[3]=="Y"){
		if (pil[3]==101) {
			a="X";
			p=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==102) {
			b="X";
			q=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==103) {
			c="X";
			r=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==201) {
			d="X";
			s=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==202) {
			e="X";
			 t=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==203) {
			f="X";
			u=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==301) {
			g="X";
			v=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==302) {
			h="X";
			w=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==303) {
			i="X";
			x=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==401) {
			j="X";
			y=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==402) {
			k="X";
			z=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==403) {
			l="X";
			A=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==501) {
			m="X";
			B=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==502) {
			n="X";
			C=pil1[8];
			system("cls");
			goto awal;
		}
		else if (pil[3]==503) {
			o="X";
			D=pil1[8];
			system("cls");
			goto awal;
		}
	}
}
else if(pil[0]==5) {
	system("cls");
	judul();
	cout<<"Menu 5 : Discharge Room\n";
	cout <<"----------------------------------------------------\n";
	cout<<"Input Room Number : ";
	cin>>pil[4];
	if (pil[4] != pil[3]) {
		cout<<"Room Number Invalid\n";
		cout <<"Please Re-input Data \n";
		cout<<"=================================\n";
		cout <<"Back to Menu ?  (y/n) : ";
		cin>>pil1[4];
		if (pil1[4]=="y"||pil1[4]=="Y") {
			system("cls");
			goto awal;
		}
	}
	else if (pil[4] == pil[3]) {
		cout<<"Discharge Room Success\n";
		cout<<"Check-out Menu-1 : Display Building Status\n";
		cout<<"=================================\n";
		cout <<"Back to Menu ?  (y/n) : ";
		cin>>pil1[5];
		if (pil1[5]=="y"||pil1[5]=="Y") {
			if (pil[3]==101) {
			a="O";
			p="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==102) {
			b="O";
			q="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==103) {
			c="O";
			r="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==201) {
			d="O";
			s="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==202) {
			e="O";
			t="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==203) {
			f="O";
			u="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==301) {
			g="O";
			v="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==302) {
			h="O";
			w="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==303) {
			i="O";
			x="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==401) {
			j="O";
			y="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==402) {
			k="O";
			z="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==403) {
			l="O";
			A="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==501) {
			m="O";
			B="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==502) {
			n="O";
			C="-";
			system("cls");
			goto awal;
		}
		else if (pil[3]==503) {
			o="O";
			D="-";
			system("cls");
			goto awal;
		}
	}
	else {
		return 0;
	}
}
}
else {
	cout <<"Angka Salah\n";
	cout <<"Kembali Ke Menu ? (y/n) : ";
	cin>>pil1[5];
	if (pil1[5] =="y" || pil1[5] =="Y") {
		system("cls");
		goto awal;
	}
}
}
void judul(){
	cout<<"================================================================\n";
	cout<<"                     Graha Pramudya Bandung                  \n";
	cout<<"        4 Asia Afrika Street, Bandung, West Java         \n";          	
	cout<<"================================================================\n";
}
void welcome() {
	cout<<"                         Welcome ..                              \n";
	cout<<"   Trusted Partner to Held Your Important Meeting  \n";
}
