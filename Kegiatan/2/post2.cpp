#include <iostream>
#include <string>
using namespace std;

void tahun_kabisat (int tahun){
   if (tahun % 4==0){
      cout << "merupakan tahun kabisat" << endl;   }
   else{
      cout << "bukan tahun kabisat" << endl;   }
}
int main(){
   int x;

   cout<<"masukkan nilai = ";
   cin >> x;
   cout << "tahun "<<x << endl;   
   tahun_kabisat(x);

   return 0;
}
