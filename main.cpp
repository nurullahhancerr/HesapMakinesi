#include <iostream>
#include <clocale>

using namespace std;

void menuYazdir() {
    cout << "-----------------------------------" << endl;
    cout << "         M E  N  U " << endl;
    cout << "-----------------------------------" << endl << endl;
    cout << "   1-Toplama" << endl;
    cout << "   2-��karma" << endl;
    cout << "   3-�arpma" << endl;
    cout << "   4-B�lme" << endl;
    cout << "   0-��k��" << endl << endl;
}

int main() {
    setlocale(LC_ALL, "turkish");
    int s1, s2, sonuc = 0, islem, olumlu;
    float bol;
    char tekrar = 'E';

    while (tekrar == 'E' || tekrar == 'e') {
        system("cls");  // ekran� temizle
        menuYazdir();

        cout << "Yapmak �stedi�iniz ��lemi Se�iniz: ";
        cin >> islem;

        switch (islem) {
            case 0:
                cout << "Programdan ��k�l�yor." << endl;
                return 0;

            case 1:
                cout << "��lem Yapmak �stedi�iniz �lk say�y� Giriniz: ";
                cin >> s1;
                cout << "��lem Yapmak �stedi�iniz ikinci say�y� Giriniz: ";
                cin >> s2;
                sonuc = s1 + s2;
                cout << "Yapt���n�z ��lemin Sonucu: " << sonuc << endl;
                break;

            case 2:
                do {
                    cout << "�lk say�y� L�tfen ikinci say�dan B�y�k giriniz:" << endl;
                    cout << "��lem Yapmak �stedi�iniz �lk say�y� Giriniz: ";
                    cin >> s1;
                    cout << "��lem Yapmak �stedi�iniz ikinci say�y� Giriniz: ";
                    cin >> s2;

                    if (s1 < s2) {
                        cout << "Yanl�� De�erler Girdiniz. L�tfen Tekrar Deneyin." << endl;
                        olumlu = 0;
                    } else {
                        olumlu = 1;
                    }
                } while (olumlu == 0);

                sonuc = s1 - s2;
                cout << "Yapt���n�z ��lemin Sonucu: " << sonuc << endl;
                break;

            case 3:
                cout << "��lem Yapmak �stedi�iniz �lk say�y� Giriniz: ";
                cin >> s1;
                cout << "��lem Yapmak �stedi�iniz ikinci say�y� Giriniz: ";
                cin >> s2;
                sonuc = s1 * s2;
                cout << "Yapt���n�z ��lemin Sonucu: " << sonuc << endl;
                break;

            case 4:
                cout << "L�tfen i�lem Yapmak �stedi�iniz ilk say�y� giriniz: ";
                cin >> s1;

                do {
                    cout << "L�tfen i�lem yapmak istedi�iniz ikinci say�y� giriniz (0'dan farkl�): ";
                    cin >> s2;
                    if (s2 == 0)
                        cout << "Bir say� 0'a b�l�nemez. L�tfen tekrar deneyin." << endl;
                } while (s2 == 0);

                bol = (float)s1 / s2;
                cout << "Yapt���n�z ��lemin Sonucu: " << bol << endl;
                break;

            default:
                cout << "Ge�ersiz i�lem se�tiniz!" << endl;
                break;
        }

        cout << "Tekrar ��lem Yapmak �stiyor Musunuz? (E/H): ";
        cin >> tekrar;
    }

    cout << "Program sonland�r�ld�." << endl;
    return 0;
}

