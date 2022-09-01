#include <iostream>

using namespace std;

class Hewan
{
    private:
        string nama;

    public:

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

};

int main()
{
    Kucing kucingA;
    kucingA.setNama("Bejo") ;

    cout << kucingA.getNama() <<endl;
   
    return 0;

}