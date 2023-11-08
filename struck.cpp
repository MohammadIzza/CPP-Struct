#include <iostream>
using namespace std;

int main()
{

    struct mahasiswa
    {
        string nama;
        int nim;
        double umur;
    };

    mahasiswa izza;
    izza.nama = "izza ";
    izza.nim = 12211121;
    izza.umur = 17;

    cout << " Hasil" << endl;
    cout << " Nama Mahasiswa \t=  " << izza.nama << endl;
    cout << " Nim mahasiswa  \t=  " << izza.nim << endl;
    cout << " umur Mahasiswa \t=  " << izza.umur << endl;

    return 0;
}