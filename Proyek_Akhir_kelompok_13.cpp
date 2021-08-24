#include <iostream>
#include <iomanip>
using namespace std;
void judul (); 
void subjudul();
void msgPwd();
void login();
void header();
int main () 
{
    long vote[100];
    string pile,ulang,tpu1,daerah,kepda[10],wakepda[10];
    int tpu=0,calon=0;
    long tdk_input[1],jums[1],jjum[1],golput[1],tidsah[1],temp,sum[1],orang=0,total=0;
    awal:
    header ();
	login();
    judul ();
    cout <<"Masukan Nama Daerah : ";
    getline(cin,daerah);
    cout <<"Masukan Jumlah Calon : ";
    cin >>calon;
    cout <<"Masukan Jumlah Pemilih : ";
    cin >>orang;
    cout <<"Masukan Jumlah TPU : ";
    cin >>tpu;
    system ("cls");
    subjudul();
    memset(vote,0,sizeof(vote));
    memset(tidsah,0,sizeof(tidsah));
    memset(golput,0,sizeof(golput));
    for (int i=1;i<=calon;i++){
        cout << "Calon No Urut-  "<<i<<endl;
        cout <<"Masukan Nama Calon Kepala Daerah : ";
        cin.ignore ();
        getline(cin,kepda[i]);
        cout <<"Masukan Nama Calon Wakil kepala Daerah : ";
        getline(cin,wakepda[i]);
    }
    penghitung:
        cout<<endl;
    for (int i=1;i<=tpu;i++) {
        cout <<"Suara TPU"<<endl;
        cout <<"TPU ke- "<<i<<endl;
        cout <<"Nama Daerah : ";
        cin.ignore ();
        getline(cin,tpu1);
        for (int i= 1;i<=calon;i++) {
            cout <<"Pasangan No-"<<i<<endl;
            cout <<"total suara : ";
            cin >>total;
            vote[i]+=total;
            }
            cout <<"Suara Tidak sah : ";
            cin >>tidsah[i];
            cout<<"Golput : ";
            cin >>golput[i];
        }
    cout <<endl;
    cout <<"Hasil Pemilihan Daerah "<<daerah<<endl;
    for (int i =1 ; i <= calon; i++) {
		jums[0]+=tidsah[i];
		jjum[0]+=golput[i];
		sum[0]+= vote[i];
		cout <<"Total Suara Masuk calon ke- "<<i<<" : "<<vote[i]<<endl;
	}
	cout <<"Total Suara Masuk : "<<sum[0]<<endl;
	cout<<"Total Suara Tidak Sah : "<<jums[0]<<endl;
	cout <<"total golput : "<<golput[0]<<endl;
	tdk_input[0] = orang-(jums[0]+jjum[0]+sum[0]);
	cout<<"Suara Tidak Terinput : "<<tdk_input[0]<<endl;
    cout <<endl;
    if(tdk_input < 0) {
		cout <<"Terjadi Kesalahan Penghitungan\n";
		cout <<"Apakah Anda Ingin Mengulang lagi ? (y/n) : ";
		cin >>ulang;
		if (ulang =="y"|| ulang =="Y") {
		memset(vote,0,sizeof(vote));
		memset(sum,0,sizeof(sum));
		memset(tidsah,0,sizeof(tidsah));
		memset(golput,0,sizeof(golput));
		goto penghitung;
		cin.ignore();
	}			
	else {
		return 0;
	}
}
cout <<"Apakah Anda Ingin Menampilkan Urutan ? (y/n) : ";
cin >>pile;
if (pile =="y"|| pile=="Y") {
	for (int i=1; i<=calon; i++){
        for (int j=1; j<=calon; j++){
            if (vote[i] > vote[j]){
                temp = vote[i];
                vote[i] = vote[j];
                vote[j] = temp;
				kepda[j]=kepda[i];
				wakepda[j]=wakepda[i];
			}
		}
	}
			for (int j =1;j<=calon;j++) {
			cout<< "Urutan Ke - "<<j<<endl;
			cout<<"Pasangan "<<kepda[j]<<" dan "<<wakepda[j]<<endl;
			cout<<"Suara : "<<vote[j]<<endl; 
}
}
else {
	}

		
	for(int i = 1;i <= calon ; ++i)
    {
       if(vote[0] < vote[i]) {
           vote[0] = vote[i];
           kepda[0] = kepda[i];
           wakepda[0]=wakepda[i];
	   }
    }
    cout <<endl;
    cout << "dengan suara " << vote[0]<<" Pemenang Pilkada Adalah Pasangan "<<kepda[0]<<" dengan wakil "<<wakepda[0]<<endl;
    cout <<"Apakah Anda Ingin Mengulang lagi ? (y/n) : ";
    cin >>ulang;
    if (ulang =="y"||ulang=="Y") {
		system("cls");
		cin.ignore();
		memset(vote,0,sizeof(vote));
		memset(sum,0,sizeof(sum));
		memset(tidsah,0,sizeof(tidsah));
		memset(golput,0,sizeof(golput));
		goto awal;
	}
	else {
		return 0;
	}
}
    void judul ()
    {
        cout <<"Program Pilkada\n";
    }
    void subjudul ()
    {
        cout <<"Penghitungan\n";
    }
void msgPwd(){
	cout << "\t|x| Password salah, coba lagi\n";
	system ("pause");
	}

void header(){
	cout << "|\t\tSelamat Datang Di Sistem Input Data\t\t|\n";
	cout << "|\t\t\tPILKADA KPU 2020\t\t\t|\n";
	}
	
void login(){
	string user,lanjut,pass;
	awal:
		cout << "Username : "; getline(cin, user);
		cout << "Password : "; getline(cin, pass);
		
		if(user == "admin" && pass == "admin"){
			cout << "Login Succesfully\n";
			system ("cls");
		}
		else{
			msgPwd(); 
			cout <<"Apakah Anda Ingin Lanjut ? (y/n) : ";
			cin >>lanjut;
			if (lanjut == "y"||lanjut =="Y") { 
				cin.ignore();
				goto awal;
			}
			else {
				exit(0);
			}
		}
	}
