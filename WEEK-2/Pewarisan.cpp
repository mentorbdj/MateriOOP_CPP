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
    
    return 0;

}