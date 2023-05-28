
//Aplikasi Kasir Tzonery
	
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<iomanip>
using namespace std;

struct data{
	string namamenu, kode;
	int harga, jumlah, total;
	char size;
	
};

void viewStruk(){
	cout<<"========================================================================\n"<<endl;
			cout<<setiosflags(ios::left)<<"  "<<setw(30)<<"PESANAN ";
			cout<<setiosflags(ios::left)<<"  "<<setw(7)<<"SIZE";
			cout<<setiosflags(ios::left)<<"  "<<setw(8)<<"HARGA";
			cout<<setiosflags(ios::left)<<"  "<<setw(5)<<"JUMLAH";
			cout<<setiosflags(ios::left)<<"  "<<setw(5)<<"TOTAL";
			cout<<"\n"<<endl;
		
	cout<<"\n========================================================================"<<endl;
}

void kebon_jeruk(){
	cout<<"==============================================================\n";
    cout<<"\t\t\tS E L A M A T   D A T A N G                          \n\n";
    cout<<"\t\t\t\tT Z O N E R Y\n\n";
    cout<<"\t\t\t    K E B O N   J E R U K 							 \n";
    cout<<"==============================================================\n";
	
}

void cengkareng(){
	cout<<"==============================================================\n";
    cout<<"\t\t\tS E L A M A T   D A T A N G                         \n\n";
    cout<<"\t\t\t\tT Z O N E R Y\n\n";
    cout<<"\t\t\t    C E N G K A R E N G							 \n";
    cout<<"==============================================================\n";
	
}

void daan_mogot(){
	cout<<"===============================================================\n";
    cout<<"\t\t\tS E L A M A T   D A T A N G                          \n\n";
    cout<<"\t\t\t\tT Z O N E R Y\n\n";
    cout<<"\t\t\t    D A A N   M O G O T 							  \n";
    cout<<"===============================================================\n";
	
}

void kembangan(){
	cout<<"===============================================================\n";
    cout<<"\t\t\tS E L A M A T   D A T A N G                           \n\n";
    cout<<"\t\t\t\tT Z O N E R Y\n\n";
    cout<<"\t\t\t      K E M B A N G A N 							      \n";
    cout<<"===============================================================\n";
	
}

void header(int cabangnya){
	switch(cabangnya){
    			case 1: 
    			kebon_jeruk();
    				break;
    			
    			case 2:
    			daan_mogot();
    				break;
    			
    			case 3:
    			kembangan();
    				break;
    			
    			case 4:
				cengkareng(); 
    				break;
    			
    			default :
    				cout<<"cabang Yang anda pilih Tidak tersedia"<<endl;
    				break;
			}
			
}

void viewBurger(){
	cout<<"=======================| DAFTAR MENU BURGER :|==================\n";
	cout<<" \n";
	cout<<"   1. Burger -> Original Beef"<<'\n';
	cout<<"   2. Burger -> BBQ Beef"<<'\n';
	cout<<"   3. Burger -> Crispy Chicken"<<'\n';
	cout<<"   4. Burger -> Mozza Chicken"<<'\n';
	cout<<"   5. Burger -> Hot Sosis"<<'\n';
	cout<<"        \n";
    cout<<"=========================| INPUT PESANAN :|=====================\n";
	
}

void viewPizza(){
	cout<<"========================| DAFTAR MENU PIZZA :|==================\n";
	cout<<" \n";
	cout<<"   1. Pizza American Favourite"<<'\n';
	cout<<"   2. Pizza Meat Monsta"<<'\n';
	cout<<"   3. Pizza Frankfurter BBQ"<<'\n';
	cout<<"   4. Pizza Cheeseburger"<<'\n';
	cout<<"   5. Pizza Tuna Melt"<<'\n';
	cout<<"   6. Pizza Veggie Garden"<<'\n';
	cout<<"\n";
    cout<<"==========================| INPUT PESANAN :|==================\n";
	
}

void viewPasta(){
	cout<<"========================| DAFTAR MENU PASTA :|==================\n";
	cout<<" \n";
	cout<<"   1. Spaghetti Oriental chicken "<<'\n';
	cout<<"   2. Spaghetti Beef "<<'\n';
	cout<<"   3. Spaghetti Black pepper Chicken "<<'\n';
	cout<<"   4. Spaghetti Tuna Olio "<<'\n';
	cout<<"   5. Spaghetti Mushroom Sauce"<<'\n';
	cout<<" \n";
    cout<<"==========================| INPUT PESANAN :|====================\n";
	
}

void viewMenu(){
	cout<<"=========================| DAFTAR MENU :|=======================\n";
	cout<<" \n";
	cout<<"   1. Burger"<<'\n';
	cout<<"   2. Pizza"<<'\n';
	cout<<"   3. Pasta"<<'\n';
	cout<<"\n";
    cout<<"========================| INPUT PESANAN :|======================\n";
}


int main (){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
	long double total,harga,totalAkhir,bayar, kembali, jumlah, totalSemua,diskon,totalKeseluruhan;
	char size, cabangBaru, pemesanBaru, pendapatan;
	string namapemesan;	
	int cabang, menu, inputan, pilih;
	   
	do {        
			newCabang:	
			totalKeseluruhan=0;
	
			cout<<"=====================================================================\n";
    		cout<<"                     	S E L A M A T   D A T A N G                 \n";
    		cout<<"        					    T Z O N E R Y				            \n";
    		cout<<"======================================================================\n";
			cout<<"\n";
			cout<<"============================| DAFTAR CABANG :|=======================\n";
			cout<<" \n";
			cout<<"   1. Kebon Jeruk"<<'\n';
			cout<<"   2. Daan Mogot"<<'\n';
			cout<<"   3. Kembangan"<<'\n';
			cout<<"   4. Cengkareng"<<'\n';
			cout<<" \n";
    		cout<<"============================| INPUT PESANAN :|=======================\n";
    		
    		cout<<"Input Cabang yang di pilih (1-4) :  ";
    		cin>>cabang;
    		
    		do{ 
    		newPemesan:
    		system("cls");
    		header(cabang);
			totalSemua=0;
			cout<<"\n\tInput nama Pemesan\t: ";
			cin >>namapemesan;
			cout<<"\tJumlah Pesanan\t\t: ";
			cin>>inputan;
			data isi[inputan];
			
			system("cls");
			header(cabang);
			
			for (int x=0; x<inputan; x++){
			viewMenu();
			cout<<"\tMasukkan Pilihan menu (1-3) : ";
			cin>>menu;
			
			system("cls");
			header(cabang);
			
			switch(menu){
				case 1 :
					viewBurger();
						cout<<"  Input Pilihan anda (1-5)                            : ";
						cin>>pilih;
						cout<<"  Input Size Pilihan (Reguler(R)/Large(L)/Jumbo(J)    : " ;
						cin>>isi[x].size;
						cout<<"  Input Jumlah Pesanan                                : ";
						cin>>isi[x].jumlah;
	
						if (pilih==1){
							isi[x].namamenu="Burger -> Original Beef";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=12000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=17000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=20000;
          					}
						}
    					else if (pilih==2){
    						isi[x].namamenu="Burger -> BBQ Beef";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=17000;
          					}	
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=21000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=23000;
         					}  	
						}
						else if (pilih==3){
						isi[x].namamenu="Burger -> Crispy Chicken";	
							if(isi[x].size=='R' || isi[x].size=='r'){
        						isi[x].harga=10000;
          					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
          						isi[x].harga=13000;
         					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=15000;
          					}
						}
    					else if (pilih==4){
						isi[x].namamenu="Burger -> Mozza Chicken";	
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=15000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=20000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=23000;
          					}
						}
   						else if (pilih==5){	
   						isi[x].namamenu="Burger -> Hot Sosis";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=10000;
         					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=12000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
           						isi[x].harga=14000;
          					}
						}
    					else {
						cout<<"\n  Pilihan tidak tersedia, Silakan memesan menu lain.\n";
						cout<<"=====================================================\n";
						}
					break;
					
				case 2 :
					viewPizza();
						cout<<"  Input Pilihan anda (1-5)                            : ";
						cin>>pilih;
						cout<<"  Input Size Pilihan (Reguler(R)/Large(L)/Jumbo(J)    : " ;
						cin>>isi[x].size;
						cout<<"  Input Jumlah Pesanan                                : ";
						cin>>isi[x].jumlah;
	
						if (pilih==1){
							isi[x].namamenu="Pizza American Favourite";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=24000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=56000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=109000;
          					}
						}
    					else if (pilih==2){
    						isi[x].namamenu="Pizza Meat Monsta";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=21000;
          					}	
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=48000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=99000;
         					}  	
						}
						else if (pilih==3){
						isi[x].namamenu="Pizza Frankfurter BBQ";	
							if(isi[x].size=='R' || isi[x].size=='r'){
        						isi[x].harga=25000;
          					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
          						isi[x].harga=60000;
         					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=116000;
          					}
						}
    					else if (pilih==4){	
    					isi[x].namamenu="Pizza Cheeseburger";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=21000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=67000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
            					isi[x].harga=119000;
          					}
						}
   						else if (pilih==5){
						   isi[x].namamenu="Pizza Tuna Melt";	
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=23000;
         					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=64000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
           						isi[x].harga=107000;
          					}
						}
						else if (pilih==6){
						   isi[x].namamenu="Pizza Veggie Garden";	
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=22000;
         					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=49000;
          					}
        					else if(isi[x].size=='J' || isi[x].size=='j'){
           						isi[x].harga=84000;
          					}
						}
    					else {
						cout<<"\n  Pilihan tidak tersedia, Silakan memesan menu lain.\n";
						cout<<"=====================================================\n";
						}
					break;	
				
				case 3 :
					viewPasta();
						cout<<"  Input Pilihan anda (1-5)                            : ";
						cin>>pilih;
						cout<<"  Input Size Pilihan (Reguler(R)/Large(L)             : " ;
						cin>>isi[x].size;
						cout<<"  Input Jumlah Pesanan                                : ";
						cin>>isi[x].jumlah;
	
						if (pilih==1){
							isi[x].namamenu="Spaghetti Oriental chicken";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=15000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=24000;
          					}
						}
    					else if (pilih==2){
    						isi[x].namamenu="Spaghetti Beef";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=19000;
          					}	
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=25000;
          					}  	
						}
						else if (pilih==3){	
							isi[x].namamenu="Spaghetti Black Pepper Ckn";
							if(isi[x].size=='R' || isi[x].size=='r'){
        						isi[x].harga=17000;
          					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
          						isi[x].harga=22000;
         					}
						}
    					else if (pilih==4){
    						isi[x].namamenu="Spaghetti Tuna Olio";
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=17000;
          					}
        					else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=24000;
          					}
						}
   						else if (pilih==5){
						   isi[x].namamenu="Spaghetti Mushroom Sauce";	
							if(isi[x].size=='R' || isi[x].size=='r'){
            					isi[x].harga=15000;
         					}
    						else if(isi[x].size=='L' || isi[x].size=='l'){
            					isi[x].harga=20000;
          					}
						}
    					else {
						cout<<"\n  Pilihan tidak tersedia, Silakan memesan menu lain.\n";
						cout<<"=====================================================\n";
						}
					break;
					
				default: 
					cout<<"Menu yang anda pilih tidak tersedia"<<endl;
					break;
			}
			
		isi[x].total=isi[x].harga * isi[x].jumlah;
    	totalSemua=totalSemua+isi[x].total;
    	
    	system("cls");
    	header(cabang);
    	}
    	
    	if(totalSemua<=250000){
    		diskon=0;
		}
    	else if(totalSemua>250000 && totalSemua<500000){
    		diskon=totalSemua*0.1;	
		}
		else if (totalSemua>=500000 && totalSemua<750000){
			diskon=totalSemua*0.2;
		}
		else if(totalSemua>=750000){
			diskon=totalSemua*0.3;
		}
		
		totalAkhir=totalSemua-diskon;
    	
    	system("cls");
    	header(cabang);
    	
    	cout<<"\n  Nama Pemesan : "<<namapemesan<<endl;
    	viewStruk();
    	for(int x=0; x<inputan;x++){
			cout<<setiosflags(ios::left)<<"  "<<setw(32)<<isi[x].namamenu;
			cout<<setiosflags(ios::left)<<"  "<<setw(5)<<isi[x].size;
			cout<<setiosflags(ios::left)<<"  "<<setw(10)<<isi[x].harga;
			cout<<setiosflags(ios::left)<<"  "<<setw(4)<<isi[x].jumlah;
			cout<<setiosflags(ios::left)<<"  "<<setw(5)<<isi[x].total;
			cout<<"\n"<<endl;
		}
    	
    	
    		cout<<"  Total Semua                               \t\t: Rp. "<<totalSemua<<endl;
    		cout<<"  Diskon                                    \t\t: Rp. "<<diskon<<endl;
    		cout<<"  Yang perlu dibayar                        \t\t: Rp. "<<totalAkhir<<endl;
			cout<<"  DIBAYAR                                   \t\t: Rp. ";
        	cin>>bayar;
        	kembali=bayar-totalAkhir;
			cout<<"  KEMBALI                                   \t\t: Rp. "<<kembali<<endl;
    		cout<<"===========================================================\n";
			cout<<"\n";
			
		
		tanya:	 
		cout<<"Apakah ada Pemesan Baru? Y/N : ";
		cin>>pemesanBaru;
		system("cls");
		header(cabang);
		if(pemesanBaru=='Y' || pemesanBaru=='y'){
			totalKeseluruhan=totalKeseluruhan+totalAkhir;
			goto newPemesan;
		}
		if(pemesanBaru=='N' || pemesanBaru=='n'){
			totalKeseluruhan=totalKeseluruhan+totalAkhir;
			goto cek;
		}

	}while(pemesanBaru=='Y' || pemesanBaru=='y');
	
	cek:
	cout<<"\nApakah Anda ingin mengecek total Pendapatan ? (Y/N): ";
	cin>>pendapatan;
	system("cls");
	if(pendapatan=='Y' || pendapatan=='y'){
	header(cabang);
	cout<<"\n\tTOTAL PENDAPATAN SAAT INI SEBESAR : Rp."<<totalKeseluruhan<<endl;
	goto lanjut;
	}
	if(pendapatan=='N' || pendapatan=='n'){
	goto lanjut;
	}
	
	lanjut:
	cout<<"\nApakah anda ingin memilih cabang lain? Y/N : ";
		cin>>cabangBaru;
		system("cls");
		if(cabangBaru=='Y' || cabangBaru=='y'){
			goto newCabang;
		}
		if(cabangBaru=='N' || cabangBaru=='n'){
			goto akhir;
		}
	
	
}while(cabangBaru=='Y' || cabangBaru=='y');

	   	akhir:
	    system("cls");
	   	cout<<"==========================================================================\n";
	    cout<<"            Terima kasih atas kunjungan nya dan Selamat Menikmati         \n";
	    cout<<" 																		 \n";
	    cout<<"==========================================================================\n"<<endl;	
		   	
   	
    return 0; 
	}
