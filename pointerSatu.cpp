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
int main()
{
    mahasiswa mhs(1); // objek dibuat dengan nim 1
    mhs.showNim();

    mahasiswa &refMhs = mhs; // reference ke objek mhs
    refMhs.nim = 2;          // ubah nilai nim melalui reference
    mhs.showNim();

    mahasiswa *pMhs = &mhs;  // pointer ke objek mhs
    pMhs->nim = 3;           // ubah nilai nim melalui pointer
    pMhs->showNim();

    return 0;
}