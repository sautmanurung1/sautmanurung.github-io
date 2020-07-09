#include <iostream>
using namespace std;
class enkapsulasi{
public:
string Nama;
string NIM;
int nilaiku;
void setNilai(int nilai){
nilaiku = nilai;
}
int getNilai(){
return nilaiku;
}
};

int main()
{
enkapsulasi JOKO;
JOKO.Nama = "Joko_susilo";
JOKO.NIM = "201931222";
JOKO.setNilai(100);
cout<<"Nama  =  "<<JOKO.Nama<<endl;
cout<<"NIM   =  "<<JOKO.NIM<<endl;
cout<<"Nilai =  "<<JOKO.getNilai();
return 0;
}
