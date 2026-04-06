#include <iostream>
using namespace std;

struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};
struct detailAlamat
{
    string desa;
    string kota;
};

int main()
{
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}