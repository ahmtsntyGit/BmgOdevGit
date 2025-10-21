#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "=== Basit Hesap Makinesi ===" << endl;
    cout << "İslemler: + (Toplama), - (Cıkarma)" << endl;

    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "İslemi secin (+ veya -): ";
    cin >> islem;

    cout << "İkinci sayiyi girin: ";
    cin >> sayi2;

    if (islem == '+') {
        sonuc = sayi1 + sayi2;
        cout << "Sonuc: " << sayi1 << " + " << sayi2 << " = " << sonuc << endl;
    }
    else if (islem == '-') {
        sonuc = sayi1 - sayi2;
        cout << "Sonuc: " << sayi1 << " - " << sayi2 << " = " << sonuc << endl;
    }
    else {
        cout << "Geçersiz islem girdiniz! Lütfen sadece + veya - kullanin." << endl;
    }

    return 0;
}