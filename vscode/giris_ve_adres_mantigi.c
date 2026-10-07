#include <stdio.h>

int main (){

printf ("===Veriler ve RAM===\n\n\n");



char karakter ;
int sayi;
float pi;

printf ("Bir karakter giriniz: ");
scanf (" %c",&karakter);

printf ("\nBir tamsayi giriniz: ");
scanf ("%d",&sayi);

printf ("\nPi sayinizi giriniz: ");
scanf ("%f",&pi);



printf ("\n\n\n");


printf ("Karakterin ASCII kodu: %d",karakter);
printf ("\nKarakterin RAM'deki Adresi: %p | Karakterin RAM'deki Boyutu: %zu ",(void*)&karakter,sizeof(karakter) );
printf ("\nSayinin RAM'deki Adresi: %p | Sayinin RAM'deki Boyutu: %zu ",(void*)&sayi,sizeof(sayi) );
printf ("\nPi'nin RAM'deki Adresi: %p | Pi'nin RAM'deki Boyutu: %zu ",(void*)&pi,sizeof(pi) );


unsigned long long piAdresi = (unsigned long long)&pi;
unsigned long long karakterAdresi = (unsigned long long)&karakter;
unsigned long long sayiAdresi = (unsigned long long)&sayi;

unsigned long long karakter_sayi_farki = karakterAdresi - sayiAdresi;
unsigned long long sayi_pi_farki = sayiAdresi - piAdresi;



printf ("\n\n\nKarakter ve sayinin Ram adresleri arasindaki fark = %llu",karakter_sayi_farki);
printf ("\nSayi ve pi'nin Ram adresleri arasindaki fark = %llu",sayi_pi_farki);




 













    return 0;
}