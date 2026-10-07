# C Temelleri ve Bellek Mimarisi Rehberi 

Buradaki programlar, C dilinin temel mekanizmalarını, Stack & Heap bellek mimarisini, pointer kullanımını ve bellek adresi hesaplamalarını pratik kod örnekleriyle incelemek üzere geliştirildi.

---

## Kod İçeriği ve Açıklamaları

##**BU KOD DİZİNLERİNDE..**

### 1. `01_veriler_ve_ram.c` — Veri Tipleri & RAM Adres Takibi
- **Kapsam:** `char`, `int`, `float` veri tiplerinin tanımlanması ve G/Ç işlemleri.
- **Bellek Analizi:** `sizeof` operatörü ile tiplerin Byte boyutları taranması. `%p` format belirleyicisiyle değişkenlerin RAM üzerindeki fiziki adresleri yazdırılması.
- **Adres Matematiği:** İki bellek adresi arasındaki mesafe `unsigned long long` türüne dökülerek Stack üzerindeki yerleşim farkı hesaplanması.

### 2. `02_karar_ve_donguler.c` — Kontrol Yapıları & Döngüler
- **Kapsam:** `switch-case` yapısı ile modüler menü tasarımı.
- **Döngüler & Akış Kontrolü:** `for` döngüsü içinde `continue` ifadesi ile tek/çift sayı filtresi. `do-while` döngüsü ile veri doğrulama mekanizması.
- **Ternary Operator:** `(c > b) ? c : b`.

### 3. `03_dinamik_bellek.c` — Heap Yönetimi (`malloc` & `free`)
- **Kapsam:** Çalışma zamanında (Runtime) kullanıcıdan alınan `n` değerine göre Heap bölgesinden yer ayrılması.
- **Güvenlik Kontrolü:** `malloc` sonrası `NULL` kontrolü ile bellek yetersizliği riski engellenmesi.
- **Memory Leak Önleme:** `free(dizi);` ile alınan belleğin sisteme iade edilmesi ve `dizi = NULL;` atamasıyla *Dangling Pointer* oluşumunun önlenmesi.

### 4. `04_fonksiyon_ve_diziler.c` — Parametre Aktarımı & String Adresleri
- **Pass-by-Value:** Fonksiyona parametre gönderildiğinde verinin kopyalandığı ve farklı bir RAM adresinde tutulduğunun doğrulanması.
- **Dizi & Pointer İlişkisi:** Dizi elemanlarının bellekte ardışık (contiguous) diziliminin gösterilmesi.
- **String & ASCII:** Metinlerin sonundaki `\0` (null terminator) karakterine kadar döngü kurularak ardışık karakterlerin adres farklarının incelenmesi.



##**KONULARA VE BAHSEDİLEN MEKANİZMALARA YER VERİDLİ**

---

## Derleme ve Çalıştırma

GCC derleyicisi kullanarak kodları derlemek ve çalıştırmak için:

```bash
**# Örnek:**
 Dinamik bellek kodunu derleme ve çalıştırma
gcc 03_dinamik_bellek.c -o dinamik_bellek
./dinamik_bellek
