#include <stdio.h>

int main (){
 int a = -5;
printf ("===Kararve Dongu Yapilari===");


int secim;

printf ("\n\nLutfen secim yapiniz (1 veya 2): ");
scanf ("%d",&secim);

switch (secim)
{
case 1:
{

   
int limit;
printf ("===Limit Sayi===");
printf ("\nLimit sayiyi seciniz:");
scanf ("%d",&limit);

for (int i = 0;i<=limit;i++ ){

int sayilar [limit];
if (i%2==0){
    continue;

}
printf ("\nLimite giden sayi: %d",i);
printf ("\nSayinin RAM'deki Adresi: %p",(void*)&sayilar[i]);
}

do {

   
    printf ("\nPozitif bir tamsayi yaziniz:");
    scanf ("%d",&a);
}while (a < 0);

printf ("Do en az bir kez calisti ve donguden cikti");

}
    
    break;


    case 2:
{
    printf ("\n\n==SAYI KKIYASLAMA==");

int c,b;
printf ("\nLutfen 2 sayi yaziniz:");
scanf("%d",&c);
scanf("%d",&b);

int buyuk = (c>b)?c:b;
printf ("Buyuk sayi: %d'dir.",buyuk);
break;


}
default:


printf ("Yanlis bir secim yaptiniz!");
    break;




}

    return 0;


}