#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <string>
#include <sstream>

using namespace std;
void test(){

}

string formatRupiah(int angka, string perantara = ".") {
 string output = to_string (angka);
 int inspost = output.length() - 3;
 while (inspost > 0) {
  output.insert(inspost, perantara);
  inspost -= 3;
 }
 return "Rp." +output+ ",00";
}

void loadin(){
  cout<<"\nLoading\t";
  for(int l=0;l<10;l++){
  Sleep(500); cout<<"±";
    }
}

void cetakgaris(int n) //untuk menampilkan garis
{  int i;
   for(i=0;i<=n;i++)
    cout<<"=";cout<<"\n";
 }

 //void rupiah(int nominal){
    //cout<<"Rp. "<< nominal << ","
 //}



int main ()
{

    char kode_kota, kelas, kembali;
    int harga_tiket, PPN, jum_bayar, jum_beli, angka;


                do
                {
    	                          cetakgaris(118);
                                  cout<<"\t\t\t\t\t\t      Selamat Datang    "<<endl;
                                  cout<<"\t\t\t\t\t\t  Pemesanan Tiket Pesawat   \n"<<endl;
                                  cout<<"\t\t\t\t\t\tCreated By Kelompok 2   "<<endl;
                                  cetakgaris(118);
 	                              cout<<"\n\t\t*--------------------*--------------------*--------------------*--------------------*";
                                  cout<<"\n\t\t| Tujuan Anda        | Kelas Ekonomi(E)   | Kelas Bisnis (B)   |Kelas Eksekutif (X) |  ";
                                  cout<<"\n\t\t|--------------------|--------------------|--------------------|--------------------|  ";
                                  cout<<"\n\t\t| 1. Bali            | Rp.150.000,00      |  Rp.250.000,00     | Rp.450.000,00      |  ";
                                  cout<<"\n\t\t|--------------------|--------------------|--------------------|--------------------|  ";
                                  cout<<"\n\t\t| 2. Surabaya        | Rp.100.000,00      |  Rp.150.000,00     | Rp.250.000,00      |  ";
                                  cout<<"\n\t\t|--------------------|--------------------|--------------------|--------------------|  ";
                                  cout<<"\n\t\t| 3. Yogyakarta      | Rp.100.000,00      |  Rp.150.000,00     | Rp.250.000,00      |  ";
                                  cout<<"\n\t\t|--------------------|--------------------|--------------------|--------------------|  ";
                                  cout<<"\n\t\t| 4. Balikpapan      | Rp.200.000,00      |  Rp.250.000,00     | Rp.450.000,00      |  ";
                                  cout<<"\n\t\t|--------------------|--------------------|--------------------|--------------------|  ";
                                  cout<<"\n\t\t| 5. Palembang       | Rp.200.000,00      |  Rp.250.000,00     | Rp.450.000,00      |  ";
                                  cout<<"\n\t\t*--------------------*--------------------*--------------------*--------------------* ";
            	                  printf("\n\t\t_______________________________Pilih Kota Tujuan____________________________________\n");
        	                      cout<<"\nMasukan Kode Kota [1-5]            	 : ";
                	              cin>>kode_kota;

								  printf("\n\t\t_____________________________Jumlah Tiket yang dibeli______________________________\n");
								  cout<<"\nMasukan Jumlah Tiket                	: ";
                                  cin>>jum_beli;

                                switch(kode_kota)
                                {
                                     case '1':
                                           {
                                             cout<<"Kota Tujuan Anda            	        : BALI\n"<<endl;
                                     printf("\n\t\t_____________________________Pilih Kelas Pesawat______________________________\n");
                                            cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]	: ";
                                            cin>>kelas;
                                            cout<<endl;
                                            if (kelas=='E' || kelas=='e')
                                                  {
                                                   harga_tiket=150000;
                                                   PPN=0;
                                                   jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
                                                   cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
                                                   cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                                                   cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                                                   cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                    	harga_tiket=250000;
														PPN=0.05*(harga_tiket*jum_beli);
	                                                    jum_bayar=(harga_tiket*jum_beli)+PPN;
	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
	                                                    cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
	                                                    cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
	                                                    cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
	                                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
	                                                    }
                                                        else if (kelas=='X' || kelas=='x')
                                                        {
                                                         harga_tiket=450000;
                                                         PPN=0.1*(harga_tiket*jum_beli);
	                    	                             jum_bayar=(harga_tiket*jum_beli)+PPN;
    	                                                 cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
        	                                             cout<<"Jumlah Pembelian Tiket 			= "<<jum_beli<<endl;
            	                                         cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                	                                     cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                    	                                 cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                      		             }
                                                        else{
                                                          printf("\n\t\t_____________________________Kode Kelas Salah______________________________\n");
                                                        }
                                                         break;
														 }
                                           case '2':
                                                 {
                                                  cout<<"Kota Tujuan Anda                    	: SURABAYA\n"<<endl;
                                     printf("\n\t\t_____________________________Pilih Kelas Pesawat______________________________\n");
                                            cout<<"\nMasukan Kode Kelas Pesawat [E/B/X] 	: ";
                                            cin>>kelas;
                                            cout<<endl;
                                            if (kelas=='E' || kelas=='e')
                                                  {
                                                   harga_tiket=100000;
                                                   PPN=0*(harga_tiket*jum_beli);
                                                   jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
                                                   cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
                                                   cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                                                   cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                                                   cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                        harga_tiket=150000;
                                                        PPN=0.05*(harga_tiket*jum_beli);
	                                                    jum_bayar=(harga_tiket*jum_beli)+PPN;
	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
	                                                    cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
	                                                    cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
	                                                    cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
	                                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
	                                                    }
                                                          else if (kelas=='X' || kelas=='x')
                                                           {
                                                            harga_tiket=250000;
                                                            PPN=0.1*(harga_tiket*jum_beli);
	                      	                                jum_bayar=(harga_tiket*jum_beli)+PPN;
    	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
        	                                                cout<<"Jumlah Pembelian Tiket 			= "<<jum_beli<<endl;
            	                                            cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                	                                        cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                    	                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                      		                }
                                                            else{
                                                                printf("\n\t\t_____________________________Kode Kelas Salah______________________________\n");
                                                            }
                                                         	break;
                                                         	}

                                            case '3':
                                           {
                                             cout<<"Kota Tujuan Anda                    	: YOGYAKARTA\n"<<endl;
                                     printf("\n\t\t_____________________________Pilih Kelas Pesawat______________________________\n");
                                            cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  	: ";
                                            cin>>kelas;
                                            cout<<endl;
                                            if (kelas=='E' || kelas=='e')
                                                  {
                                                   harga_tiket=200000;
                                                   PPN=0*(harga_tiket*jum_beli);
                                                   jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
                                                   cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
                                                   cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                                                   cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                                                   cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;

                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                        harga_tiket=250000;
                                                        PPN=0.05*(harga_tiket*jum_beli);
	                                                    jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                        cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
	                                                    cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
	                                                    cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
	                                                    cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
	                                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;

                                                       }
                                                         else if (kelas=='X' || kelas=='x')
                                                            {
                                                            harga_tiket=250000;
                                                            PPN=0.1*(harga_tiket*jum_beli);
	                      	                                jum_bayar=(harga_tiket*jum_beli)+PPN;
    	                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
        	                                                cout<<"Jumlah Pembelian Tiket 			= "<<jum_beli<<endl;
            	                                            cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                	                                        cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                    	                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                      		                }
                                      		                else{
                                                                printf("\n\t\t_____________________________Kode Kelas Salah______________________________\n");
                                                            }
                                                                break;
                                           }

											case '4':
                                           {
                                             cout<<"Kota Tujuan Anda                    	: BALIKPAPAN\n"<<endl;
                                     printf("\n\t\t_____________________________Pilih Kelas Pesawat______________________________\n");
                                            cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  	: ";
                                            cin>>kelas;
                                            cout<<endl;
                                            if (kelas=='E' || kelas=='e')
                                                  {
                                                   harga_tiket=200000;
                                                   PPN=0*(harga_tiket*jum_beli);
                                                   jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
                                                   cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
                                                   cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                                                   cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                                                   cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;

                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                        harga_tiket=250000;
                                                        PPN=0.05*(harga_tiket*jum_beli);
	                                                    jum_bayar=(harga_tiket*jum_beli)+PPN;
	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
	                                                    cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
	                                                    cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
	                                                    cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
	                                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;

	                                                    }
                                                            else if (kelas=='X' || kelas=='x')
                                                            {
                                                            harga_tiket=450000;
                                                            PPN=0.1*(harga_tiket*jum_beli);
	                      	                                jum_bayar=(harga_tiket*jum_beli)+PPN;
    	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
        	                                                cout<<"Jumlah Pembelian Tiket 			= "<<jum_beli<<endl;
            	                                            cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                	                                        cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                    	                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                      		                }
                                      		                else{
                                                                printf("\n\t\t_____________________________Kode Kelas Salah______________________________\n");
                                                            }
                                                                break;
                                           }

                                            case '5':
                                           {
                                             cout<<"Kota Tujuan Anda                    	: PALEMBANG\n"<<endl;
                                     printf("\n\t\t_____________________________Pilih Kelas Pesawat______________________________\n");
                                            cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  	: ";
                                            cin>>kelas;
                                            cout<<endl;
                                            if (kelas=='E' || kelas=='e')
                                                  {
                                                   harga_tiket=200000;
                                                   PPN=0*(harga_tiket*jum_beli);
                                                   jum_bayar=(harga_tiket*jum_beli)+PPN;
                                                   cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
                                                   cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
                                                   cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                                                   cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                                                   cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                        harga_tiket=250000;
                                                        PPN=0.05*(harga_tiket*jum_beli);
	                                                    jum_bayar=(harga_tiket*jum_beli)+PPN;
	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
	                                                    cout<<"Jumlah Pembelian Tiket			= "<<jum_beli<<endl;
	                                                    cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
	                                                    cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
	                                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;


	                                                    }
                                                            else if (kelas=='X' || kelas=='x')
                                                            {
                                                            harga_tiket=450000;
                                                            PPN=0.1*(harga_tiket*jum_beli);
	                      	                                jum_bayar=(harga_tiket*jum_beli)+PPN;
    	                                                    cout<<"Harga Tiket  				= "<<formatRupiah(harga_tiket)<<endl;
        	                                                cout<<"Jumlah Pembelian Tiket 			= "<<jum_beli<<endl;
            	                                            cout<<"Harga Pembelian 			= "<<formatRupiah(harga_tiket*jum_beli)<<endl;
                	                                        cout<<"PPN         				= "<<formatRupiah(PPN)<<endl;
                    	                                    cout<<"Jumlah Bayar 				= "<<formatRupiah(jum_bayar)<<endl;
                                      		                }
                                      		                else{
                                                                printf("\n\t\t_____________________________Kode Kelas Salah______________________________\n");
                                                            }
                                                                break;
                                           }

                                                default:
                                                cout<<"Anda Salah Memasukan Kode"<<endl;
                                }
                                printf("\nAnda Ingin Memesan Kembali [Y/T]  	 : ");
                                cin>>kembali;
                                 }
                                while(kembali=='Y' || kembali=='y');
                                getch();

}
