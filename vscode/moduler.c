#include <stdio.h>

void fonksiyon_test(int kopya);
void dizi_yazdir (int arr[],int boyut);



int main (){

    int test = 42;
    int kopya;

printf ("Fonksiyondaki test degeri: %d ",test);
    printf ("\nTest sayisinin bellekteki adresi: %p\n\n",(void*)&test);
   
fonksiyon_test  (test);

int dizi [5] = {10,20,30,40,50};
dizi_yazdir (dizi,5);

char isim [20];
printf ("\nIsim giriniz:");
scanf ("%s",isim);

for (int i = 0;isim [i] != '\0';i++){

    
     long fark = (char*)&isim[i+1] - (char*)&isim[i] ;

printf ("\n%c ile %c'nin bellek adresleri arasindaki fark: %llu",isim[i],isim[i+1],fark);
}



    return 0;
}

void fonksiyon_test (int kopya){
 
 
 kopya = 999;
 printf ("Fonksiyondaki test degeri: %d",kopya);
    printf ("\nKopya sayinin bellekteki adresi: %p",(void*)&kopya);

}

void dizi_yazdir (int arr[],int boyut){

for (int i=0;i<boyut;i++){

    printf ("\n%d elemaninin indexi: %d",arr[i],i);
    printf ("\n%d elemaninin bellekteki adresi: %p",(void*)&arr[i]);

}



}