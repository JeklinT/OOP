#include <iostream>
using namespace std;
int main(){
    int data,Assigment[10],Mid[5],Final[5],Attendance[10],Quiz[5],Rata[5];
    char nama[50][40],Grade[10];
    cout<<"Jumlah Mahasiswa    : "; cin>>data;

    for(int i=0;i<data;i++){
        cout<<"\tData ke - "<<i+1<<endl;
        cout<<"Masukan Nama                : "; cin>>nama[i];
        cout<<"Masukan Nilai Attendance    : "; cin>>Attendance[i];
        cout<<"Masukan Nilai Quiz          : "; cin>>Quiz[i];
        cout<<"Masukan Nilai Assigment     : "; cin>>Assigment[i];
        cout<<"Masukan Nilai Mid           : "; cin>>Mid[i];
        cout<<"Masukan Nilai Final         : "; cin>>Final[i];
        cout<<endl;
        Rata[i]=(Attendance[i]+Quiz[i]+Assigment[i]+Mid[i]+Final[i])/5;
    if(Rata[i] >= 91){
        Grade[i] = 'A';
    }else if(Rata[i] >= 85){
        Grade[i] = 'A_';
    }else if(Rata[i] >= 82){
        Grade [i]='B +';
    }else if(Rata[i] >=78){
        Grade [i]= 'B';
    }else if (Rata[i] <=75){
        Grade [i]= 'B_';
    }
    }

    cout<<"Data Mahasiswa"<<endl;
    cout<<endl;

    for(int i=0;i<data;i++){   
        cout<<"\tData ke - "<<i+1<<endl;
        cout<<"Nama Mahasiswa    : "<<nama[i]<<endl;
        cout<<"Nilai Attendance    : "<<Attendance[i]<<endl;
        cout<<"Nilai Quiz    : "<<Quiz[i]<<endl;
        cout<<"Nilai Assigment    : "<<Assigment[i]<<endl;
        cout<<"Nilai Mid    : "<<Mid[i]<<endl;
        cout<<"Nilai Final  : "<<Final[i]<<endl;
        cout<<"Rata-Rata   : "<<Rata[i]<<endl;
        cout<<"Grade        : "<<Grade[i]<<endl;
        }
       return 0 ;
}
