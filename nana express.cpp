#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int pil;
int berat;
char lama;
string nav,user,nip,password,nama1,nama2,alamat1,alamat2,telp1,telp2,TGL;
void garis();
void garis1();
void garis2();
void pilihan(); //SWITCH CASE MENU BARANG
void data(); //DATA PENGIRIM DAN PENERIMA
void YT ();  //MENU NAVIGASI1
void login ();
void menu();
main(){
    system("color f9");
    //LOGIN PEGAWAI
    login:
    system("cls");
    login();
    if(user=="Yayu Pratiwi" && nip=="1234567" && password=="12345"){
        YT();
    }
    else if(user=="Nia Kurnia" && nip=="1111111" && password=="12121"){
        YT();
    }
    else if(user=="Herwinda" && nip=="7777777" && password=="88888"){
        YT();
    }
    else{
        cout<<"\n";
        //LOGIN SALAH
        garis1();
        cout<<setw(75)<<"DATA YANG ANDA MASUKKAN SALAH"<<endl;
        cout<<setw(76)<<"Silahkan isi kembali form login"<<endl;
        cout<<setw(66)<<"-Tekan ENTER-"<<endl;
        garis1();
        getch();
        system("cls");
        goto login;
        YT();
    }

    menu:
    menu();
    getch();
    cout<<"\n";
    //INPUT PILIHAN BERDASAR MENU
    inputpil:
    garis1();
    cout<<setw(55)<<"# Kota Tujuan (Kode)  : "; cin>>pil;
    cout<<setw(55)<<"# Lama Pengiriman     : "; cin>>lama;
    if(lama!='A' && lama!='a' && lama!='B' && lama!='b' && lama!='C' && lama!='c' ||
       pil!=1 && pil!=2 && pil!=3 && pil!=4 && pil!=5 && pil!=6 && pil!=7 && pil!=8 && pil!=9 && pil!=10)
    {
        cout<<setw(65)<<"Pilihan yang dimasukkan salah"<<endl;
        getch();
        goto inputpil;
    }

    cout<<setw(55)<<"# Berat Barang (angka): "; cin>>berat;
    cout<<setw(62)<<"# Tanggal Pengiriman Barang  : ";
    cin.ignore();
    getline(cin,TGL);
    system("cls");

    //INPUT DATA PENGIRIM & PENERIMA
    data();
    cout<<"\n";

    //CETAK
    system("cls");
    garis();
    cout<<setw(90)<<"                        NA EXPRESS                          "<<endl;
    garis();
    cout<<endl;
    garis1();
    cout<<setw(90)<<":                      Data Pengirim                       :"<<endl;
    garis1();
    cout<<setw(51)<<"|   Nama           : "<<nama1<<endl;
    cout<<setw(51)<<"|   Alamat Lengkap : "<<alamat1<<endl;
    cout<<setw(51)<<"|   Nomor Telepon  : "<<telp1<<endl;
    cout<<"\n";
    //
    garis1();
    cout<<setw(90)<<":                      Data Penerima                       :"<<endl;
    garis1();
    cout<<setw(51)<<"|   Nama           : "<<nama2<<endl;
    cout<<setw(51)<<"|   Alamat Lengkap : "<<alamat2<<endl;
    cout<<setw(51)<<"|   Nomor Telepon  : "<<telp2<<endl;
    cout<<"\n";
    //
    garis1();
    cout<<setw(90)<<":                  Data Pengiriman Barang                  :"<<endl;
    garis1();
    pilihan();
    cout<<setw(60)<<"Tanggal Pengiriman Barang  : "<<TGL<<"\n";
    garis1();
    cout<<"\n";
    getch();

    //PILIHAN NAVIGASI
    navigasi:
    system("cls");
    cout<<"\n\n\n\n";
    garis2();
    cout<<setw(65)<<"SILAHKAN PILIH"<<endl;
    garis2();
    cout<<setw(75)<<"||  A. Kembali ke MENU         ||"<<endl;
    cout<<setw(75)<<"||  B. Kembali ke LOGIN        ||"<<endl;
    cout<<setw(75)<<"||  C. SELESAI                 ||"<<endl;
    garis2();
    cout<<setw(47)<<"---> ";
    getline(cin,nav);
    if(nav=="A"||nav=="a"){
        goto menu;
    }
    else if(nav=="B"||nav=="b"){
        goto login;
    }
    else if(nav=="C"||nav=="c"){
        system("cls");
        cout<<"\n\n\n\n\n";
        garis();
        cout<<setw(65)<<">>>>> Selamat Beristirahat  "<<user<<" ^_^ <<<<<"<<endl;
        garis();
    }
    else{
      goto navigasi;
    }
    getch();
}
void garis(){
    cout<<setw(90)<<"============================================================"<<endl;
}
void garis1(){
    cout<<setw(90)<<"------------------------------------------------------------"<<endl;
}
void garis2(){
    cout<<setw(75)<<"================================="<<endl;
}
void login(){
    garis();
    cout<<setw(90)<<"            SELAMAT DATANG DI KASIR NA EXPRESS              "<<endl;
    garis();
    cout<<"\n";
    cout<<setw(92)<<"             ---------[ Login Form ]---------               \n\n";
    cout<<setw(54)<<"Username : ";
    getline(cin,user);
    cout<<setw(54)<<"NIP      : ";
    getline(cin,nip);
    cout<<setw(54)<<"Password : ";
    getline(cin,password);

}
void menu(){
    system("cls");
    Sleep(400);
    cout<<setw(75)<<"--------------------------------"<<endl;
    cout<<setw(75)<<"|    MENU PENGIRIMAN BARANG    |"<<endl;
    cout<<setw(75)<<"--------------------------------"<<endl;
    cout<<"\n";
    Sleep(400);
    garis();
    cout<<setw(82)<<" KODE  | KOTA TUJUAN   | LAMA PENGIRIMAN  | TARIF/KG"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  1    | Jakarta       | A (1-2 Hari)     | Rp. 15.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 11.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  6.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  2    | Bekasi        | A (1-2 Hari)     | Rp. 14.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 10.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  5.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  3    | Depok         | A (1-2 Hari)     | Rp. 14.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 10.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  5.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  4    | Tangerang     | A (1-2 Hari)     | Rp. 15.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 11.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  6.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  5    | Bandung       | A (1-2 Hari)     | Rp. 18.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 14.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp. 10.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  6    | Bogor         | A (1-2 Hari)     | Rp. 18.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 14.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp. 10.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  7    | Purwakarta    | A (1-2 Hari)     | Rp. 13.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp.  9.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  5.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  8    | Subang        | A (1-2 Hari)     | Rp. 15.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 11.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp.  6.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  9    | Cirebon       | A (1-2 Hari)     | Rp. 21.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 17.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp. 13.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(88)<<"  10   | Serang        | A (1-2 Hari)     | Rp. 26.000,00-"<<endl;
    cout<<setw(88)<<"       |               | B (3-5 Hari)     | Rp. 20.000,00-"<<endl;
    cout<<setw(88)<<"       |               | C (6-7 Hari)     | Rp. 17.000,00-"<<endl;
    garis();
    Sleep(400);
    cout<<setw(77)<<"Tekan ENTER untuk memasukkan pilihan";
    cout<<"\n";
}
void YT(){
        system("cls");
        cout<<"\n\n\n\n";
        garis2();
        cout<<setw(75)<<"||     ANDA BERHASIL LOGIN     ||"<<endl;
        garis2();
        cout<<setw(75)<<"|| Ketik Y untuk ke MENU       ||"<<endl;
        cout<<setw(75)<<"|| Ketik T untuk LOGIN kembali ||"<<endl;
        garis2();
        cout<<setw(51)<<" ---> ";
        cin >>nav;
        if (nav=="Y" || nav=="y"){
            system("cls");
        }

        else{
            system("cls");
            cin.ignore();
            main();
        }
}

void data(){
        //INPUT DATA PENGIRIM
    garis1();
    cout<<setw(90)<<":                      Data Pengirim                       :"<<endl;
    garis1();
    cout<<setw(51)<<"||  Nama           : ";
    getline(cin,nama1);
    cout<<setw(51)<<"||  Alamat Lengkap : ";
    getline(cin,alamat1);
    cout<<setw(51)<<"||  Nomor Telepon  : ";
    getline(cin,telp1);
    cout<<"\n";
    //INPUT DATA PENERIMA
    garis1();
    cout<<setw(90)<<":                      Data Penerima                       :"<<endl;
    garis1();
    cout<<setw(51)<<"||  Nama           : ";
    getline(cin,nama2);
    cout<<setw(51)<<"||  Alamat Lengkap : ";
    getline(cin,alamat2);
    cout<<setw(51)<<"||  Nomor Telepon  : ";
    getline(cin,telp2);
}

void pilihan(){
    switch(pil){
    case 1 :
        cout<<setw(60)<<"Kota Tujuan         : Jakarta"<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*15000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*11000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*6000<<".00,-"<<endl;
        }
    break;

    case 2 :
        cout<<setw(60)<<"Kota Tujuan         : Bekasi "<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*14000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<"Biaya Pengiriman    : Rp."<<berat*10000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*5000<<".00,-"<<endl;
        }
    break;

    case 3 :
        cout<<setw(60)<<"Kota Tujuan         : Depok  "<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*14000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*10000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*5000<<".00,-"<<endl;
        }
    break;

    case 4 :
        cout<<setw(62)<<"Kota Tujuan         : Tangerang"<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*15000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*11000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*6000<<".00,-"<<endl;
        }
    break;

    case 5 :
        cout<<setw(60)<<"Kota Tujuan         : Bandung"<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*18000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*14000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*10000<<".00,-"<<endl;
        }
    break;

    case 6 :
        cout<<setw(60)<<"Kota Tujuan         : Bogor  "<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*18000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*14000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*10000<<".00,-"<<endl;
        }
    break;

    case 7 :
        cout<<setw(63)<<"Kota Tujuan         : Purwakarta"<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*13000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*9000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*5000<<".00,-"<<endl;
        }
    break;

    case 8 :
        cout<<setw(60)<<"Kota Tujuan         : Subang "<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*15000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*11000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*6000<<".00,-"<<endl;
        }
    break;

    case 9 :
        cout<<setw(60)<<"Kota Tujuan         : Cirebon"<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*21000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*17000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*13000<<".00,-"<<endl;
        }
    break;

    case 10 :
        cout<<setw(60)<<"Kota Tujuan         : Serang "<<endl;
        cout<<setw(53)<<"Berat Barang        : "<<berat<<" Kg"<<endl;
        if(lama=='A'||lama=='a'){
            cout<<setw(61)<<"Lama Pengiriman     : 1-2 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*26000<<".00,-"<<endl;
        }
        else if(lama=='B'||lama=='b'){
            cout<<setw(61)<<"Lama Pengiriman     : 3-5 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*20000<<".00,-"<<endl;
        }
        else{
            cout<<setw(61)<<"Lama Pengiriman     : 6-7 Hari"<<endl;
            cout<<setw(56)<<"Biaya Pengiriman    : Rp."<<berat*17000<<".00,-"<<endl;
        }
    break;
    }
}
