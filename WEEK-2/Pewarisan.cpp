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

class Kucing : public Hewan {
	
	public:
		void jatuhGedungTinggi()
		{
			cout << nama <<" Masih Selamat Guys"<< endl;
		}

};

class Tikus : public Hewan {
    public:

        void menggaliLubang()
        {
            cout << nama << " Menggali Lubang Tikus" << endl;
        }
};


int main()
{
	
	Kucing kucingAnggora;
	
	kucingAnggora.nama = "Anggora";
	
	kucingAnggora.jatuhGedungTinggi();
    
    return 0;

}