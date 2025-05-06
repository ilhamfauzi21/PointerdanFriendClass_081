#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;

    // Konstruktor
    mahasiswa(int n)
    {
        nim = n;
    }

    void showNim()
    {
        cout << "No Induk : " << nim << endl;
    }
};