#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   float x1, x2, y1, y2, a, b, jarak;

   raptor_prompt_variable_zzyz ="masukkan titik A1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan titik A2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="masukkan titik B1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan titik B2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   a =(x2-x1)*(x2-x1);
   b =(y2-y1)*(y2-y1);
   jarak =sqrt(a+b);
   cout << "A = "<<a << endl;   
   cout << "B = "<<b << endl;   
   cout << "jarak antara titik A ke titik B = "<<jarak << endl;
   return 0;
}
