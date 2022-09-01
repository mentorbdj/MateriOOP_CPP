#include <iostream>
using namespace std;
 
class mahasiswa{
public:
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
};
 
string main() {
    mahasiswa tanto, budi, adi; // tipe data object
    tanto.nama = "Tanto";

    budi.nama = "Budi";
    budi.nilai = 7.0;
    budi.nim = 123456;
    
    tanto.printData();
    cout<<"--------------------------"<<endl;
    budi.printData();
    return "Exit Buat Selesai";

    string namaBudi;
    string namaTanto;

    namaBudi = "Budi";
    namaTanto = "Tanto";

    cout<<"--------------------------"<<endl;
    cout<<"Nama "<<namaBudi<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Nama "<<namaTanto<<endl;
    cout<<"--------------------------"<<endl;
}