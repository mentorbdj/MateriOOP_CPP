#include <iostream>

using namespace std;

class mahasiswa
{
    // Atribute atau ciri khas
    public:
        string nama;
        float nilai;
        int nrp;

        // Method atau Kelakuan
        void belajar() {
            cout<<nama<<" Sedang Belajar"<<endl;
        }

        void tidur() {
            cout<<nama<<" Sedang Tidur"<<endl;
        }
};


int main() {
    mahasiswa mahasiswaLuthfy;
    mahasiswa mhs;

    mahasiswaLuthfy.nama = "Luthfy"; // set atribute
    mahasiswaLuthfy.belajar(); // memanggil method

    mhs.nama = "Aldi";
    mhs.tidur();

    return 0;
}