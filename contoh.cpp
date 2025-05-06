#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:
    int panjang, lebar;

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }
    int luasPp(int a, int b)
    {
        return a * b;
    }
    
    Lingkaran al;
};
class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari : ";
        cin >> jarijari;
    }
};
