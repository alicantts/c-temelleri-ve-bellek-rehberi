#include <stdio.h>
#include <stdlib.h>

int main (){


    int n;
printf ("===Dizi Oluşturma===\n\n\n");
printf ("Dizi kac elemanli olacak?:");
scanf ("%d",&n);

float *dizi  = (float*) malloc (n*(sizeof(float)));

if (dizi == NULL){

    printf ("Diziye bellek ayrilamadi");
    return -1;
}



for (int i = 0;i<n;i++){

dizi [i] = (i+1)*10.0;

printf ("Dizinin %d. elemani: %.2f\n",i+1,dizi[i]);

}


free(dizi);
dizi = NULL;


return 0;



}