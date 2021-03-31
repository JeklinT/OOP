#include <iostream>


using namespace std;

class Person  {
private:
string name;
char gender;

public:
Person();
void setName();
void setGender() ;
string getName();
char getGender();
};

class Teacher {
private:
int nik;
string faculty;

public:
void setNik() ;
int getNik();
void SetFaculty ();
string getFaculty();
void setData();
void displayData();
};

class Student {
private:
int nim;
string registrationNumber;
string prodi;
	
public:
void setNim (int nim);
void SetRegistrationNumber ();
void setProdi() ;
int getNim();
string getRegistrationNumber();
string getProdi();
};


int main () {
	
	
	
	return 0;
}
