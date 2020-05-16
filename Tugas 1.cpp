#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"NAMA : ANANG MA'RUF'\n";
	cout<<"NIM : F1B019023\n";
	cout<<"PROGRAM QUIZ PILIHAN GANDA TENTANG COVID19\n";
	cout<<"--------------------------------------------------------------------\n";
	cout<<"                                    SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "anang" && pass == "22222")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan cobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"silakan pilih jawaban yang benar sesuai dengan kepercayaan anda,opsion A, B, C,dan D!\n";
	cout<<"--------------------------------------------------------------------------------------\n";
	cout<<"1. pertaman kali munculnya covid19 di negara manakah??\n";
	string pilgan1[50]={"a. china","b. Amerika","c. Indonesia ","d. Italia"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"\n";        
cout<<"2.Apa saja gejala terinfeksi virus corona??\n";
    string pilgan2[50]={"a. Deman,batuk kering,sesak napas,dll","b. flu","c. muntah","d. sakit perut"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"\n";        
	cout<<"3. covid-19 ini dapat masuk lewat bagian anggota tubuh..??\n";
	string pilgan3[50]={"a. telinga","b. tangan","c. hidung","d. kaki"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"\n";				
	cout<<"4. untuk meredakan penyebaran virus corona ini diharapakan seluruh masyarakat agar...? ??\n";
	string pilgan4[50]={"a. stay at home","b. keluar negri","c. bermain-main","d. keluyuran"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"\n";       
cout<<"5.virus corona ini dibawah oleh hewan apakah itu??\n";
    string pilgan5[50]={"a. kambing","b. kerbau","c. lalat","d. kelelawar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"6. Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk covid-19 ini adalah??\n";
	string pilgan6[50]={"a. 18 C","b. 38 C","c. 40 C","d. 30 C"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}     
	cout<<"\n";
	cout<<"7. bagaimanakah cara mencegah covid-19 ini??\n";
	string pilgan7[50]={"a. jaga kebersihan","b. tidak usah jaga kebersihan","c. olahraga","d. bermain-main"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"8. Apa itu PDP covid-19 ??\n";
	string pilgan8[50]={"a. semua jawaban salah","b. pasien demam","c. pasien dalam pengawasa ","d. pasien sedang diproses"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"9. Apa betul orang tua mudah terinfeksi oleh covid-19 ??\n";
	string pilgan9[50]={"a. benar","b. salah","c. belum tau pasti","d. fifti-fifti"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"10. Bagaimana kah pendapat anda tentang munculnya covid-19 ini??\n";
	string pilgan10[50]={"a. senjata biologis negara kapitalisme","b. muncul atas kehendak allah swt","c. salah mengosumsi makanan","d. dari hewan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"***************PENILAIAN AKHIR QUIZ PILIHAN GANDA 10 SOAL*********************\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda  : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"********************************"<<endl;
			cout<<"    silahkan logout program\n";
			cout<<"*********TERIMAKASIH************"<<endl;
	
}
