#include <iostream>

using namespace std;

int main(){

 int s,jam,menit,detik,sisa;

 cout<<"Konversi Detik ke jam, menit, Detik";cout<<endl;

 cout<<"Masukan jam: "; cin>>s;

 cout<<"Masukan menit: "; cin>>s;
 
  cout<<"Masukan Detik: "; cin>>s;
 jam=s/3600;

 sisa=s%3600;

 menit=sisa/60;

 detik=sisa%60;

 cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik"<<endl;

 }
 
