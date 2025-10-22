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
    // SBecene'nin Katkısı: Kalan temel işlemleri (Çarpma ve Bölme) ekledim.

    else if (islem == '*') {
        sonuc = sayi1 * sayi2;
        cout << "Sonuc: " << sayi1 << " * " << sayi2 << " = " << sonuc << endl;
    }
    else if (islem == '/') {
        if (sayi2 != 0) { // Bölme işleminde sıfıra bölme kontrolü
            sonuc = sayi1 / sayi2;
            cout << "Sonuc: " << sayi1 << " / " << sayi2 << " = " << sonuc << endl;
        } else {
            cout << "Hata: Sayi sifira bolunemez!" << endl;
        }
    }
    
    return 0;