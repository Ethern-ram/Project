#include <iostream>
#include <cmath>      // pow, sqrt
#include <limits>     // numeric_limits

using namespace std;

// helper: bersihin input kalau user salah ketik
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMenu() {
    cout << "\n=== KALKULATOR LENGKAP ===\n";
    cout << "1. Tambah (+)\n";
    cout << "2. Kurang (-)\n";
    cout << "3. Kali (*)\n";
    cout << "4. Bagi (/)\n";
    cout << "5. Modulus (%) [integer]\n";
    cout << "6. Pangkat (a^b)\n";
    cout << "7. Akar (sqrt)\n";
    cout << "8. Persen (a% dari b)\n";
    cout << "9. Faktorial (n!) [integer]\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
}

int main() {
    int pilih;

    while (true) {
        showMenu();

        if (!(cin >> pilih)) {          // kalau input bukan angka
            cout << "Input harus angka.\n";
            clearInput();
            continue;
        }

        if (pilih == 0) {
            cout << "Bye.\n";
            break;
        }

        // Nanti kita isi case-case nya di Step 2
        switch (pilih) {
            default:
                cout << "Pilihan ga valid.\n";
        }
    }

    return 0;
}
