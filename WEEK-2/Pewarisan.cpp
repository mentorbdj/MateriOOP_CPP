#include <iostream>

using namespace std;

class Hewan
{
private:
    string nama; // atribute
    
public:
	// constructor
        Hewan()
        {
            cout << "Kelas Hewan Dibuat" << endl;
        }

	string getNama()
	{
		return nama;
	}
	
	void setNama(string paramterNama)
	{
		nama = paramterNama;
	}
	
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
        // constructor
        Kucing(string namaHewan)
        {
            Hewan::setNama(namaHewan);
        }

		void jatuhGedungTinggi()
		{
			cout << getNama() <<" Masih Selamat Guys"<< endl;
		}

};

class Tikus : public Hewan {
    public:

        void menggaliLubang()
        {
            cout << getNama() << " Menggali Lubang Tikus" << endl;
        }
};


int main()
{
	
	Kucing kucingAnggora("Anggora");
	
	kucingAnggora.jatuhGedungTinggi();
    
    return 0;

}