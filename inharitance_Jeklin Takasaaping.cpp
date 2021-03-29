#include <iostream>

using namespace std;

const int batas  = 80 ; // panjang karakter

class person { // kelas induk
	private: 
		string nama;
		char gender[batas];
	public:
		void setName (){
			cout << "Masukan Nama : " << endl;
			cin >> nama;
			
			cout << "Masukan Gender: " << endl;
			cin >> gender;
		}
	
		void setGender (){
			void << "Namanya adalah : " << nama >> endl;
			void << "Gendernya adalah : " << gender >> endl;
			
		}
};

class Teacher : public person { // kelas anak

}; 

class Student : public person { // kelas anak

};

int main (){
	
}
