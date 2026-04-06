#include <iostream>
#include <string>

using namespace std;
struct detailAlamat
{
    string desa;
    string kota;
};
struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main()
{
    orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
        cout << "Nama : ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout << "Alamat Kota : ";
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur : ";
        cin >> mhs[i].umur;
        cout << endl;
        cin.ignore();
    }

    // tampilkan
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}