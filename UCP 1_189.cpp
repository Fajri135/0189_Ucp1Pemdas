// 1. Berikut ini adalah beberapa pendeklarasikan variabel dengan tipe data yang berbeda-beda,yaitu data interger, data string, data varchar dan array.
//    int n; string name; varchar ; arr[x].
// 
// 2. Implementasi conditional statement didalam suatu program adalah 
//  
// 3. Berikut ini adalah contoh implementasi dari struct :
//    struct Node {
//    int noMhs;
//    string name;
//    Node* next;
//    };
//    Node* START = NULL;
// 
// 4. Implementasi prosedur dalam sebuah program ditandai dengan adanya command void dan fungsi sendiri dalam sebuah program ditandai dengan adanya command for dalam program tersebut.
// 
// 5. Berikut ini adalah contoh implementasi dari Looping yaitu LoopingFor dimana Looping sendiri adalah suatu proses pengulangan fungsi/keadaan sampai menemukan kondisi dimana tidak diperlukan perulangan lagi :
//    #include <iostream>
//    using namespace std;
//
//    int main() {
//    int i;
//    int arr[5];
//
//    for (i = 60; i > 10; i -= 10) {
//      cout << i << "Selamat Pagi Dunia" << endl;
//    }
//    cout << "Nilai i terakhir : " << i << endl;
//    for (i = 0; i < 5; i++) {
//        cout << "Masukan Nilai Index ke-" << i << " :";
//        cin >> arr[i];
//    }
//    for (i = 0; i < 5; i++) {
//        cout << "Data Array ke-" << i << " :" << arr[i] << endl;
//    }
//    return 0;
//    }

#include <iostream>
using namespace std;

int main()
{
    int NilaiMatematika, NilaiBahasaInggris, Rerata;
    string status;
    string Nama; 

    cout << "Masukkan Nama : ";
    cin >> Nama;

    cout << "Masukkan nilai Matematika : ";
    cin >> NilaiMatematika;

    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> NilaiBahasaInggris;

    Rerata = (NilaiMatematika + NilaiBahasaInggris) / 2;

    if (Rerata >= 70) {
        status = "Lulus";
    }
    else if (NilaiMatematika > 80) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nama " << Nama << endl;
    cout << "Nilai Matematika " << NilaiMatematika << endl;
    cout << "Nilai BahasaInggris  " << NilaiBahasaInggris << endl;
    cout << "Rerata " << Rerata << endl;
    cout << "Anda Dinyatakan " << status << endl;
    return 0;
}