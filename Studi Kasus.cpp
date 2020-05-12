#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void login(){
   string user, pass;
   int i, menu, awal, pilih;
   cout << "=================ANANG MA'RUF=================\n";
   cout << "==================F1B019023====================\n";
   cout << "\tSELAMAT DATANG DI PROGRAM SURAT MASUK DAN SURAT KELUAR\n";  
   cout << "*************************************************************\n";
   int login=0;
   i = 1;
   do {
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user =="anang" && pass =="22222"){
           cout << "--------------------\n";
           cout << "Anda Berhasil Login" <<endl;
           cout << "--------------------\n\n";
           system("pause");
           system("cls");
           i=4;
           login=1;
  }
       else {
           cout << "------------------------\n";          
           cout << "Maaf ID & PASSWORD Salah!" <<endl;
     cout << "-------------------------\n\n";          
           i = i +1;
       }
    }while (i <= 3);
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
       cout<< "Mohon Maaf Akun Anda Kami Blockir Untuk Sementara\n";
       cout<<"silahkan hubungi kami melalui e-mail anangmaruf0381@gmail.com terima kasih";
    getch();
    exit(0);
   }
}

int main(){
	login();
	awal:
	    system("cls");
	    int i, menu, awal, pilih,menu1, menu2, exit;
		cout<<"|=======PROGRAM SURAT MASUK DAN SURAT KELUAR=======|\n";
		cout<<"|================bismillah =================|\nSilahkan masukkan pilihan: ";
		cout<<"\n\n ===|1. Surat Masuk  |===\n ===|2. Surat Keluar |===\n ===|3. Exit         |===";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
		goto menu1;
		case 2:
	    goto menu2;
		case 3:
		goto exit;
	menu1:
	    system("cls");
	        cout<< "\tProgram Surat Masuk\n";
			cout<< "list Surat Masuk : \n";
			cout<<"1. Camaba unram\n";
			cout<<"2. Keluarga besar prima\n";
			cout<<"3. Berkarya lewat tulisan\n";
			cout<<"4. Unram jaya\n";
			cout<<"5. Binamial\n";
			cout<<"6. Beasiswa NTB\n";
			cout<<"7. HMPM\n";
			cout<<"8. GMD\n";
			cout<<"9. BSO RISET\n";
            cout<<"10. Buat Surat\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" |Nomer surat     : |22/CMUN/XI/2020| \n"; 
			  	cout<<" |Tanggal surat   : |Mataram, 10 Mei 2020|\n";
			  	cout<<" Asal surat      : REKTOR UNRAM\n";
			  	cout<<" Isi Surat       : Himbauan kepada Bapak/Ibu dosen untuk tetap diam Dirumah \n";}
			  	
			if (pilih == 2){
			  	cout<<" Nomer surat     : 19/KBP/III/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Asal surat      : Keluarga besar prima\n";
			  	cout<<" Isi Surat       : Diharapkan seluruh keluarga prima agar mengkuti seminar online\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 5/BLT/XII/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Asal surat      : Dompu\n";
			  	cout<<" Isi Surat       : seminar online \n";}
			if (pilih == 4){
			  	cout<<" Nomer surat     : 14/UJ/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Asal surat      : Unram\n";
			  	cout<<" Isi Surat       : Merayakan prestasi unram\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 12/BINAMIAL/II/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 11 Mei 2020\n";
			  	cout<<" Asal surat      : Sekret BL\n";
			  	cout<<" Isi Surat       : Berbicang milineal\n";}
			if (pilih == 6){
			  	cout<<" Nomer surat     : 23/BNTB/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 12 Mei 2020\n";
			  	cout<<" Asal surat      : NUSA TENGGARA BARAT\n";
			  	cout<<" Isi Surat       : Beasiswa nusa tenggara barat\n";}
			if (pilih == 7){
			  	cout<<" Nomer surat     : 2/HMPM/IV/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 13 Mei 2020\n";
			  	cout<<" Asal surat      : Sekret HMPM\n";
			  	cout<<" Isi Surat       : Musyawarah besar yang ke3\n";}
			if (pilih == 8){
			  	cout<<" Nomer surat     : 10/GMD/XIII/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 13 Mei 2020\n";
			  	cout<<" Asal surat      : Sekret GMD\n";
			  	cout<<" Isi Surat       : program kerja gerakan mahasiswa dompu\n";}
			if (pilih == 9){
			  	cout<<" Nomer surat     : 9/BSO/XIV/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 13 Mei 2020\n";
			  	cout<<" Asal surat      : Dompu\n";
			  	cout<<" Isi Surat       : Selamat anda menjadi peserta BSO riset\n";}
			  	system("pause");
			if (pilih == 10){
				 int n;
                 char a[1000][30],b[1000][30],c[1000][30],d[1000][30];
                 cout<<"Input:\n\n";
                 cout<<"Masukan banyak data yang ingin diinput = ";
                 cin>>n;
                 cout<<endl<<endl;
                 for (int i=0;i<n;i++){
                 cout<<"Data ke-"<<i+1<<endl;
                 cout<<"Masukan nomor surat\t= ";
                 scanf(" %[^\n]s",a[i]);
                 cout<<"Masukan alamat surat\t= ";
                 cin>>b[i];
                 cout<<"Masukan tanggal surat\t= ";
                 cin>>c[i];
                 cout<<"Masukan isi surat\t= ";
                 cin>>d[i];
                 }
                 system("CLS");
                 cout<<"Output:\n\n";
                 cout<<"===============================================================================================================\n";
                 cout<<"|  N0  |           NOMOR SURAT           | ALAMAT SURAT | TANGGAL SURAT |               ISI SURAT             |\n";
                 cout<<"===============================================================================================================\n";
                 for(int i=0;i<n;i++){
                 cout<<"|  "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(32)<<a[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(13)<<b[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(14)<<c[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(36)<<d[i]<<"|";
                 cout<<"\n============================================================================================================\n";
			}
		system("pause");
		goto mmenu;
}
}
	
	mmenu:
	    system("cls");
		cout << "\tProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat masuk\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu1;
	menu2:
	   system("cls");
		    cout<< "\tProgram Surat Keluar\n";
			cout<< "list Surat Keluar : \n";
			cout<<"1. Camaba unram\n";
			cout<<"2. Keluarga besar prima\n";
			cout<<"3. Berkarya lewat tulisan\n";
			cout<<"4. Unram jaya\n";
			cout<<"5. Buat Pesan\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" Nomer surat     : 1/Anang/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 24 Mei 2020\n";
			  	cout<<" Tujuan Surat    : CU\n";
			  	cout<<" Isi Surat       : Terima Kasih atas himbauan yang diberikan, kami akan menjalankannya \n";}
			if (pilih == 2){
			  	cout<<" Nomer surat     : 2/Anang/II/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 24 Mei 2020\n";
			  	cout<<" Tujuan Surat    : Keluarga besar prima\n";
			  	cout<<" Isi Surat       : Terima Kasih atas kesempatan mengikuti seminar online\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 3/Anang/III/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 24 Mei 2020\n";
			  	cout<<" Tujuan Surat    : BLT\n";
			  	cout<<" Isi Surat       : Terima kasih atas kesempatan mengikuti training BLT\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 4/Anang/V/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 24 Mei 2020\n";
			  	cout<<" Tujuan Surat    : UJ\n";
			  	cout<<" Isi Surat       : Semoga kegiatan berjalan dengan lancar\n";}
			if (pilih == 6){				
                char ks[50],ns[50],ts[50],as[50],is[50];
				cout<<"Silahkan Ketikkan Surat Anda  :\n"; 
				gets(ks);
			    cout<<"Masukkan Nomer surat    : ";
	            gets(ns);
	            cout<<"Masukkan Tanggal surat  : ";
	            gets(ts);
	            cout<<"Masukkan Asal surat     : ";
	            gets(as);
	            cout<<"Masukkan Isi Surat      : ";
	            gets(is);
	            cout<<"Nomer Surat Anda         :"<<ns;
	            cout<<"\nTanggal Surat Anda       :"<<ts;
	            cout<<"\nAlamat Tujuan Surat Anda :"<<as;
	            cout<<"\nIsi Surat Anda           :"<<is;}
	            cout<<"\n";
	            system("pause");
			    system("cls");
	        	goto kmenu;
	kmenu:
	     cout << "\nProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat keluar\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu2;
	exit:
	  cout<< "\tSEKIAN DAN TERIMA KASIH";

	
}
}
}
