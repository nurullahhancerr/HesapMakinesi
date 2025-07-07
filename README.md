# Basit C++ Konsol Hesap Makinesi

Bu program, kullanıcıya basit dört işlem (toplama, çıkarma, çarpma, bölme) yapma imkanı sunan bir **konsol tabanlı hesap makinesidir**.

---

## Özellikler

- Toplama, çıkarma, çarpma ve bölme işlemleri yapabilme
- Çıkarma işleminde, ilk sayının ikinci sayıdan büyük olması kontrolü
- Bölme işleminde, ikinci sayının sıfır olmaması kontrolü (0’a bölme engellenmiştir)
- Hatalı girişlerde kullanıcıya uyarı mesajı gösterme ve tekrar deneme imkanı
- İşlem sonrası kullanıcıya başka işlem yapma seçeneği sunma
- Türkçe dil desteği ve Türkçe karakter kullanımı
- Ekran temizleme ve menü tekrar gösterme ile kullanıcı dostu arayüz

---

## Gereksinimler

- Windows işletim sistemi (çünkü `system("cls")` komutu kullanılmıştır)
- C++ derleyici (g++ veya Visual Studio gibi)

---

## Programın Çalıştırılması

1. Dosyayı indirin veya kopyalayın.
2. Bir C++ derleyici ile derleyin:
   ```bash
   g++ hesap_makinesi.cpp -o hesap_makinesi
