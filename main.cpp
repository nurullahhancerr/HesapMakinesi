#include <iostream>
#include <clocale>

using namespace std;

void menuYazdir() {
    cout << "-----------------------------------" << endl;
    cout << "         M E  N  U " << endl;
    cout << "-----------------------------------" << endl << endl;
    cout << "   1-Toplama" << endl;
    cout << "   2-Çýkarma" << endl;
    cout << "   3-Çarpma" << endl;
    cout << "   4-Bölme" << endl;
    cout << "   0-Çýkýþ" << endl << endl;
}

int main() {
    setlocale(LC_ALL, "turkish");
    int s1, s2, sonuc = 0, islem, olumlu;
    float bol;
    char tekrar = 'E';

    while (tekrar == 'E' || tekrar == 'e') {
        system("cls");  // ekraný temizle
        menuYazdir();

        cout << "Yapmak Ýstediðiniz Ýþlemi Seçiniz: ";
        cin >> islem;

        switch (islem) {
            case 0:
                cout << "Programdan çýkýlýyor." << endl;
                return 0;

            case 1:
                cout << "Ýþlem Yapmak Ýstediðiniz Ýlk sayýyý Giriniz: ";
                cin >> s1;
                cout << "Ýþlem Yapmak Ýstediðiniz ikinci sayýyý Giriniz: ";
                cin >> s2;
                sonuc = s1 + s2;
                cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc << endl;
                break;

            case 2:
                do {
                    cout << "Ýlk sayýyý Lütfen ikinci sayýdan Büyük giriniz:" << endl;
                    cout << "Ýþlem Yapmak Ýstediðiniz Ýlk sayýyý Giriniz: ";
                    cin >> s1;
                    cout << "Ýþlem Yapmak Ýstediðiniz ikinci sayýyý Giriniz: ";
                    cin >> s2;

                    if (s1 < s2) {
                        cout << "Yanlýþ Deðerler Girdiniz. Lütfen Tekrar Deneyin." << endl;
                        olumlu = 0;
                    } else {
                        olumlu = 1;
                    }
                } while (olumlu == 0);

                sonuc = s1 - s2;
                cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc << endl;
                break;

            case 3:
                cout << "Ýþlem Yapmak Ýstediðiniz Ýlk sayýyý Giriniz: ";
                cin >> s1;
                cout << "Ýþlem Yapmak Ýstediðiniz ikinci sayýyý Giriniz: ";
                cin >> s2;
                sonuc = s1 * s2;
                cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc << endl;
                break;

            case 4:
                cout << "Lütfen iþlem Yapmak Ýstediðiniz ilk sayýyý giriniz: ";
                cin >> s1;

                do {
                    cout << "Lütfen iþlem yapmak istediðiniz ikinci sayýyý giriniz (0'dan farklý): ";
                    cin >> s2;
                    if (s2 == 0)
                        cout << "Bir sayý 0'a bölünemez. Lütfen tekrar deneyin." << endl;
                } while (s2 == 0);

                bol = (float)s1 / s2;
                cout << "Yaptýðýnýz Ýþlemin Sonucu: " << bol << endl;
                break;

            default:
                cout << "Geçersiz iþlem seçtiniz!" << endl;
                break;
        }

        cout << "Tekrar Ýþlem Yapmak Ýstiyor Musunuz? (E/H): ";
        cin >> tekrar;
    }

    cout << "Program sonlandýrýldý." << endl;
    return 0;
}

