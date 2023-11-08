#include <iostream>
using namespace std;

// STRUCT
struct trans
{
    int nominal;
    string jenis;
    string deskripsi;
};

int main()
{   // UNTUK MERAPIKAN TERMINAL
    system("CLS");

    // DEKLARASI
    trans mhs[100];
    int n = 0;
    int pilih;

    string lanjut = "ya";

    while (lanjut == "ya")
    {
        // MENU TRANSAKSI
        cout << " ========================" << endl;
        cout << "      MENU TRANSAKSI     " << endl;
        cout << " ========================" << endl;
        cout << " 1. INPUT PEMASUKAN      " << endl;
        cout << " 2. INPUT PENGELUARAN    " << endl;
        cout << " 3. JUMLAH PEMASUKAN     " << endl;
        cout << " 4. JUMLAH PENGELUARAN   " << endl;
        cout << " 5. EXIT                 " << endl;
         cout << " =======================" << endl<< endl;
      
        cout << " Pilih Menu (1/2/3/4/5) : ";
        cin >> pilih;
        cout << endl;

        // PROGRAM UTAMA
        if (pilih == 1)
        {
            cout << " INPUT PEMASUKAN" << endl;
            mhs[n].jenis = "pemasukan";
            cout << " Masukkan Besar Nominal : ";
            cin >> mhs[n].nominal;
            cout << " Deskripsi Transaksi    : ";
            cin >> mhs[n].deskripsi;

            n++;
            cout << endl;
        }
        else if (pilih == 2)
        {
            cout << " INPUT PENGELUARAN" << endl;
            mhs[n].jenis = "pengeluaran";
            cout << " Masukkan Besar Nominal : ";
            cin >> mhs[n].nominal;
            cout << " Deskripsi Transaksi    : ";
            cin >> mhs[n].deskripsi;

            n++;
            cout << endl;
        }
        else if (pilih == 3)
        {
            int totPemasukan = 0;

            cout << " JUMLAH PEMASUKAN" << endl;
            for (int i = 0; i < n; i++)
            {
                if (mhs[i].jenis == "pemasukan")
                {
                    totPemasukan = totPemasukan + mhs[i].nominal;
                }
            }
            cout << " Jumlah pemasukan Anda sekarang adalah " << totPemasukan << endl;
            cout << endl;
        }
        else if (pilih == 4)
        {
            int totPengeluaran = 0;

            cout << " JUMLAH PENGELUARAN" << endl;
            for (int i = 0; i < n; i++)
            {
                if (mhs[i].jenis == "pengeluaran")
                {
                    totPengeluaran = totPengeluaran + mhs[i].nominal;
                }
            }
            cout << " Jumlah pengeluaran Anda sekarang adalah " << totPengeluaran << endl;
            cout << endl;
        }
        else if (pilih == 5)
        {
            cout << " Anda keluar dari menu transaksi" << endl;
            break;
        }
        else
        {
            cout << " Maaf angka yang anda masukkan tidak ada dalam daftar menu \n Tolong masukkan angka yang benar " << endl<< endl;
        }
    }

    return 0;
}