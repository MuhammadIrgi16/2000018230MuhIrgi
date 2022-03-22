#include <iostream>
using namespace std;

int pertamax(){
    int a, harga;
    harga = 9000;
    cout<<"Pertamax 9000/liter"<<endl;
    cout <<"Masukkan jumlah liter : ";
    cin >>a;
    if(a == 1){
        cout<<"Pertalite SPBU TAMAN SISWA"<<endl;
        cout<<"Jumlah Liter = "<<a<<endl;
        cout<<"Jumlah bayar = "<<harga<<endl;
    }else{
        cout<<"Pertalite SPBU TAMAN SISWA"<<endl;
        cout<<"Jumlah Liter = "<<a<<endl;
        cout<<"Jumlah bayar = "<<harga*a<<endl;
    }
}

int pertalite(){
    int b, harga;
    harga = 7000;
    cout<<"Pertalite 7000/liter"<<endl;
    cout <<"Masukkan jumlah liter : ";
    cin >>b;
    if(b == 1){
        cout<<"Pertalite SPBU TAMAN SISWA"<<endl;
        cout<<"Jumlah Liter = "<<b<<endl;
        cout<<"Jumlah bayar = "<<harga<<endl;
    }else{
        cout<<"Pertalite SPBU TAMAN SISWA"<<endl;
        cout<<"Jumlah Liter = "<<b<<endl;
        cout<<"Jumlah bayar = "<<harga*b<<endl;
    }
}

int main(){
    int pilihan;

    cout<<"             SPBU TAMAN SISWA\n"<<endl;
    cout<<"Tersedia : "<<endl;
    cout<<"1. Pertamax "<<endl;
    cout<<"2. Pertalite"<<endl;
    cout<<"Pilih jenis BBM anda : ";
    cin>>pilihan;
    cout<<endl<<endl;
    
    if(pilihan == 1){
        pertamax();
    }else if(pilihan == 2){
        pertalite();
    }else{
        cout<<"maaf tidak ada dalam pilihan";
    }
    return 0;
}
