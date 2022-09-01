#include <iostream>

using namespace std;

class Hewan
{
public:
    string nama, warna, jenis_kelamin, suara; // atribute

    void berlari() 
    {
        cout << nama << " Berlari!"<<endl;
    }

    void mengendus() 
    {
        cout << nama << " Mengendus!"<<endl;
    }

    void tidur() 
    {
        cout << nama << " Tidur!"<<endl;
    }

    void melompat() 
    {
        cout << nama << " Melompat!"<<endl;
    }

    void menggigit() 
    {
        cout << nama << " Menggigit!"<<endl;
    }
};


int main()
{
    Hewan kucingA, kucingB;

    kucingA.nama            = "Bejo";
    kucingA.warna           = "Putih Orange";
    kucingA.jenis_kelamin   = "Jantan";
    kucingA.suara           = "Meow";

    kucingB.nama            = "Gembul";
    kucingB.warna           = "Putih Coklat";
    kucingB.jenis_kelamin   = "Jantan";
    kucingB.suara           = "Meow";

    // memanggil method
    kucingA.berlari();

    // menampilkan attribute
    cout << kucingB.nama << endl;
    return 0;

}