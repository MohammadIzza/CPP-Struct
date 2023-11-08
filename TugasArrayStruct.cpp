#include <iostream >
using namespace std;

struct transaksi
{
    string jenis, deskripsi;
    float nominal;
};

int main()
{

    int i,a, b, c;

    cout << " masukkan banyak data yang ingi  dimasukkan " << endl;
    cin >> a;
    cout << "========================================" << endl;
    for (i=0;i<a;i++)
    {   
        transaksi data[i];
        cout << " data ke - "<< i+1 << endl;
        cout << " masukkan jenis data "; cin >> data->jenis;
        cout << " masukkan deskripsi data "; cin >> data->deskripsi;
        cout << " masukkan nominal data "; cin >> data->nominal ;

        cout << " jenis data adalah = "<< data->jenis<< endl;
        cout << " deskripsi data adalah = " << data->deskripsi << endl;
        cout << " nominal data adalah = " << data->nominal << endl;
    }

    return 0;
}