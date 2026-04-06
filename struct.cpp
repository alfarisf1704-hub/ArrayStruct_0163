#include <iostream>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.nama;
    cout << "Umur : ";
    cin >> mhs.nama;
    cout << endl;
    // tampilkan
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}